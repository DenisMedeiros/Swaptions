#!/bin/bash

#SBATCH --time=0-0:10
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=1
#SBATCH --partition test
#SBATCH --exclusive
#SBATCH --job-name=swaptions

inicio=`echo $(($(date +%s%N)/1000000))`

srun ./swaptions -ns 5000 -sm 10000

fim=`echo $(($(date +%s%N)/1000000))`
tempo=$(($fim - $inicio))
echo "Tempo de execução: $tempo ms"
