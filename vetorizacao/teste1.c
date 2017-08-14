#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define n 1048576

unsigned short a[n], b[n], c[n];
unsigned int i, j;

int main(int argc, char **argv)
{ 
    for(i = 0; i < n; i++)
    {
        a[i] = 2;
        b[i] = 8;
    }
        
    for(i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    
    printf("Concluído, com último valor de c = %d!\n", c[n-1]);
    return 0;
}


