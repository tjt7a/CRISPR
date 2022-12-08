#!/bin/bash

cd genomes/forward
echo "Unzipping forward human genome gzip file"

# If unzipped file doesnt exist, unzip
if [ ! -f forward_hg38_no_n.txt ]
then
	gunzip -k forward_hg38_no_n.txt.gz
fi

cd ../rc
echo "Unzipping reverse complement human genome gzip file"

# If unzipped file doesnt exist, unzip
if [ ! -f reverse_compliment_hg38_no_n.txt ]
then
	gunzip -k reverse_compliment_hg38_no_n.txt.gz
fi
	
cd ../../
echo "Running hyperscan with sgRNA + PAM against forward and backward HG38 DNA Strand"

start=`date +%s`

# Forward
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/forward/forward_hg38_no_n.txt > results/forward_results.txt &

# Backward
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/rc/reverse_compliment_hg38_no_n.txt > results/rc_results.txt &


wait

end=`date +%s`
runtime=$((end-start))

echo "It took $runtime seconds to run all alignments with 2 cores!"
echo "Done with experiment!"
