cd genomes
echo "Unzipping forward human genome gzip file"
gunzip -k forward_hg38_no_n.txt.gz

cd ..

echo "Running hyperscan with sgRNA + PAM against forward HG38 DNA Strand"
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/forward_hg38_no_n.txt > results/forward_results.txt
tail -n 3 results/forward_results.txt | grep "Simulation Time"
echo ""

cd genomes
rm forward_hg38_no_n.txt
echo "Unzipping reverse compliment human genome gzip file"
gunzip -k reverse_compliment_hg38_no_n.txt.gz

cd ..

echo "Running hyperscan with sgRNA + PAM against reverse compliment HG38 DNA Strand"
./hsrun dbs/lev_1_4_sgRNA_with_PAM.hs genomes/reverse_compliment_hg38_no_n.txt > results/reverse_compliment_results.txt
tail -n 3 results/reverse_compliment_results.txt | grep "Simulation Time"
echo ""

cd genomes
rm reverse_compliment_hg38_no_n.txt

echo "Done with experiment!"
