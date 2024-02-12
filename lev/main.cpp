#include "levenshtein.h"
#include <iostream>
#include <string>

using namespace std;

/**
* Usage
*/
void usage() {

    cout << "./lev -d <distance> -f <sequence file> optional: -p" << endl;
    
}

/**
 *
 */
int main(int argc, char * argv[]) {


    cout << "**************************" << endl;
    cout << "       Levenshtein        " << endl;
    cout << "   Automata Generator" << endl;
    cout << "     by Jack Wadden" << endl;
    cout << "   modified by Tom Tracy  " << endl;
    cout << "     for CRISPR + PAM     " << endl;
    cout << "**************************" << endl;

    bool PAM = false;
    bool STRIP = false;
    bool N   = false;
    
    uint32_t edit_distance;
    uint32_t num_patterns;
    string source_fn;

    if(argc != 5 && argc != 6) {
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
            }
            
            else {
                usage();
                exit(1);
            }
        }
    }

    cout << "Generating levenshtein..." << endl;
    
    // print configuration
    cout << "  edit distance: " << to_string(edit_distance) << endl;
    cout << "  pattern source: " << source_fn << endl;

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
                       N); // Allow for 'N' symbols
        id++;
    }

    // What is the difference between STRIP and N?

    // emit ANML file
    string out_fn = "lev_" +
        to_string(id) + "_" +
        to_string(edit_distance);
    
    // Add to filename if PAM or STRIP
    if(PAM){
        out_fn += "_PAM";
    }
    
    if(STRIP){
        out_fn += "_STRIP";
    }
        
    out_fn += ".anml";

    a.automataToANMLFile(out_fn);
}
