#include <stdio.h>
#define n 100000000

char a[n], b[n], c[n];

int main()
{
    int i;
    for(i = 0; i < n; i++)
    { 
        a[i] = b[i] = i % 20;
    }

    for(i = 0; i < n; i++)
    {
        c[i] = b[i] + c[i];
    }

    
    printf("Valor: %d\n", c[n-1]);
    return 0;
}
