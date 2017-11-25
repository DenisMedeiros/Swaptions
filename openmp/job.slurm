#!/bin/bash

#SBATCH --time=0-0:30
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=32
#SBATCH --partition test
#SBATCH --exclusive
#SBATCH --job-name=swaptions

# Comparação de qual schedule é melhor.

export OMP_SCHEDULE="static"
./swaptions -ns 8192 -sm 8192 -nt 32

export OMP_SCHEDULE="dynamic"
./swaptions -ns 8192 -sm 8192 -nt 32

export OMP_SCHEDULE="guided"
./swaptions -ns 8192 -sm 8192 -nt 32

# Usando o melhor resultado do schedule (dynamic), calcula a escalabilidade (número de simulações = 8192).

#n_swap_inicial=512
#for (( n_threads=1; n_threads<=32; n_threads=n_threads*2 )) 
#do
#    n_swap=$n_swap_inicial
#    for (( j=1; j<=5; j++ ))
#    do
#        ./swaptions -ns $n_swap -sm 8192 -nt $n_threads
#        echo "Experimento com $n_swap swaptions, $n_threads threads e 8192 simulações."
#        n_swap=$(( n_swap*2 ))
#    done
#
#    echo "##########################################################"
#done

# Usando o melhor resultado do schedule (dynamic), calcula a escalabilidade (número de simulações = 8192).

n_sim_inicial=512
for (( n_threads=1; n_threads<=64; n_threads=n_threads*2 )) 
do
    n_sim=$n_sim_inicial
    for (( j=1; j<=5; j++ ))
    do
        ./swaptions -ns 8192 -sm  $n_sim -nt $n_threads
        echo "Experimento com 8192 swaptions, $n_threads threads e $n_sim simulações."
        n_sim=$(( n_sim*2 ))
    done

    echo "##########################################################"
done
