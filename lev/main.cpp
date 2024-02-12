#include "levenshtein.h"
#include <iostream>
#include <string>

using namespace std;

/**
* Usage
*/
void usage() {

    cout << "./lev -d <distance> -f <sequence file> optional: -p, -n, -s " << endl;
    cout << "-d <distance>      | The maximum Levenshtein distance accepted by the generated automaton" << endl;
    cout << "-f <sequence file> | The input filename of the CRISPR CAS9 sequence" << endl;
    cout << "-p                 | Includes the PAM at the end of the CAS9 sequence" << endl;
    cout << "-n                 | Include 'N' in the alphabet" << endl;
    cout << "-s                 | Strip Levenshtein diagonals to reduce number of states" << endl;
}

/**
 *
 */
int main(int argc, char * argv[]) {


    cout << "**************************" << endl;
    cout << "       Levenshtein        " << endl;
    cout << "   Automata Generator     " << endl;
    cout << "     by Jack Wadden       " << endl;
    cout << "   modified by Tom Tracy  " << endl;
    cout << "     for CRISPR + PAM     " << endl;
    cout << "**************************" << endl;

    bool PAM = false;   // This variable sets the final 3 states to the PAM "NGG"
    bool N   = false;   // Accept N states
    bool STRIP = false; // Strip the Levenshtein to the minimum number of states
    
    uint32_t edit_distance = -1;
    string source_fn = "";

    if(!(argc > 2)) {
        usage();
        exit(1);
    }else{
        for(int i = 1; i < argc; i++){
            string flag = argv[i];
            //
            if(flag.compare("-d") == 0){
                i++; 
                if(i != argc)
                    edit_distance = atoi(argv[i]);
                else{
                    usage();
                    exit(1);
                }
                
            }else if(flag.compare("-f") == 0) {
                i++;
                if(i != argc){
                    source_fn = argv[i];
                }else{
                    usage();
                    exit(1);
                }
            }else if(flag.compare("-p") == 0) {
                i++;
                PAM = true;
            }else if(flag.compare("-n") == 0) {
                i++;
                N = true;
            }else if(flag.compare("-s") == 0) {
                i++;
                STRIP = true;
            }else{
                usage();
                exit(1);
            }
        }
    }

    // If the required arguments are not provided ...
    if(edit_distance == -1 || source_fn == "") {
        usage();
        exit(1);
    }

    cout << "Generating levenshtein..." << endl;
    
    // print configuration
    cout << "\tEdit distance: " << to_string(edit_distance) << endl;
    cout << "\tPattern source: " << source_fn << endl;
    if(PAM)
        cout << "\tAdding PAM states..." << endl;
    if(N)
        cout << "\tIncluding 'N' in alphabet..." << endl;
    if(STRIP)
        cout << "\tStripping diagonals off Levenshtein automaton..." << endl;

    // Initialize automata
    Automata a;

    // open file to read lines
    ifstream file(source_fn);
    if(!file){
        cout << "Could not open pattern source file!" << endl;
        exit(1);
    }
    string line;
    uint32_t id = 0;
    while(!file.eof()){
        getline(file,line, '\n');
        if(line.empty()){
            continue;
        }
        cout << "Building filter for: " << line << endl;

        // Generates the Levenshtein Automaton
        genLevenshtein(&a,
		    id,
        	line,
        	edit_distance,
        	STRIP, // dont trim
		    PAM,
        	N
	    ); // Allow for 'N' symbols
        id++;
    }

    // What is the difference between STRIP and N?

    // emit ANML file
    string out_fn = "lev_" +
        to_string(id) + "_" +
        to_string(edit_distance);

    
    // Add to filename if PAM or N or STRIP
    if(PAM){
        out_fn += "_PAM";
    }

    if(N){
	out_fn += "_N";	
    }
    
    if(STRIP){
        out_fn += "_STRIP";
    }
        
    out_fn += ".anml";

    a.automataToANMLFile(out_fn);
}
