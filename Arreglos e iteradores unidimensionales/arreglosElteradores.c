#include<stdio.h>

int main()

{
    printf("\nAreglosEltereados\n");

    int listaEnteros[11];

    int i = 0;

    for(i; i < 11; i++)
        {
            listaEnteros[i] = i*i;
            printf("Valor es (%i): %i \n", i, listaEnteros[i]);
        }





    return 0;
}