# CRISPR
Automata Code for CRISPR

We use the VASim CPU simulator to simulate automata. To install and run VASim:

1. Go to lib/VASim and run 'make'
2. Run ./vasim

To run the experiment, run the ./run_experiment.sh shell
./run_experiment.sh


The levenshtein directory contains the levenshtein automata generated by AutomataZoo/Levenshtein/code/lev
We generated each levenshtein automaton from the gRNA sequence without PAM, and then added the final three PAM states (NGG).

1. Strip PAM from the source sequence
	sgRNA -> sgRNA_without_PAM	

2. Generate a Levenshtein automaton from the sequence without PAM
	lev -d 4 -f sgRNA_without_Pam -> lev_1_4_sgRNA_without_PAM.anml

3. Add PAM states to the end of the Levenshtein, by making all reporting states point to the first base in the PAM (N), and making the last G report
	lev_1_4_sgRNA_without_PAM.anml -> lev_1_4_sgRNA_with_PAM.anml

4. Translate ANML automata into MNRL automata to work with hscompile
	vasim -m lev_1_4_sgRNA_with_PAM.anml -> lev_1_4_sgRNA_with_PAM.mnrl

5. Compile the resulting Levenshtein + PAM automaton into a Hyperscan database with hscompile
	hscompile lev_1_4_sgRNA_with_PAM.mnrl lev_1_4_sgRNA_with_PAM.hs

6. Run the database against the forward-strand genome
	hsrun lev_1_4_sgRNA_with_PAM.hs 
