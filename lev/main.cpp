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
    cout << "-r                 | Replace Ns with ACGT" << endl;
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
    bool REPLACE = false; // Replace N states in the pattern with ACGT -- this allows us to include the PAM in the edit distance
    
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
                PAM = true;
            }else if(flag.compare("-n") == 0) {
                N = true;
            }else if(flag.compare("-s") == 0) {
                STRIP = true;
            }else if(flag.compare("-r") == 0) {
                REPLACE = true;
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

    // If both the N and the REPLACE flag are enabled, this is an error ...
    if(N && REPLACE){
        cout << "ERROR: Cannot accept Ns and replace Ns; use either -n or -r" << endl;
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
    if(REPLACE)
        cout << "\tReplacing Ns in the pattern with [ACGT]" << endl;

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
        cout << "Building Levenshtein Automaton for: " << line << endl;

        // Generates the Levenshtein Automaton
        genLevenshtein(&a,
		    id,
        	line,
        	edit_distance,
        	STRIP, // dont trim
		    PAM,
        	N,
            REPLACE
	    );
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

    if(REPLACE){
        out_fn += "_REPLACE";
    }
        
    out_fn += ".anml";

    a.automataToANMLFile(out_fn);
}
