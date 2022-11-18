#!/bin/bash

cd genomes/forward
echo "Unzipping forward human genome gzip file"

# If unzipped file doesnt exist, unzip
if [ ! -f forward_hg38_no_n.txt ]
then
	gunzip -k forward_hg38_no_n.txt.gz
fi

echo "Splitting forward human genome into 4 chunks"
split -n 4 forward_hg38_no_n.txt

cd ../rc
echo "Unzipping reverse complement human genome gzip file"

# If unzipped file doesnt exist, unzip
if [ ! -f reverse_compliment_hg38_no_n.txt ]
then
	gunzip -k reverse_compliment_hg38_no_n.txt.gz
fi
	
echo "Splitting reverse complement human genome into 4 chunks"
split -n 4 reverse_compliment_hg38_no_n.txt

cd ../../
echo "Running hyperscan with sgRNA + PAM against forward and backward HG38 DNA Strand"

start=`date +%s`

# Forward
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/forward/xaa > results/forward_results_xaa.txt &
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/forward/xab > results/forward_results_xab.txt &
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/forward/xac > results/forward_results_xac.txt & 
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/forward/xad > results/forward_results_xad.txt &

# Backward
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/rc/xaa > results/rc_results_xaa.txt &
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/rc/xab > results/rc_results_xab.txt &
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/rc/xac > results/rc_results_xac.txt &
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/rc/xad > results/rc_results_xad.txt &

wait

end=`date +%s`
runtime=$((end-start))

echo "It took $runtime seconds to run all alignments with 8 cores!"
echo "Done with experiment!"
