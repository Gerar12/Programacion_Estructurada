//Solucion del reto

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nEn este programa multiplicaremos todos los nuemros dela lista \n");

    int nUmerosMultiplicar [3];
        printf("Escribe tu primer numero del arreglo: ");
        scanf("%i", &nUmerosMultiplicar[0]);
    
        printf("Escribe tu segundo numero del arreglo: ");
        scanf("%i", &nUmerosMultiplicar[1]);
    
        printf("Escribe tu tercer numero del arreglo: ");
        scanf("%i", &nUmerosMultiplicar[2]);

    
        
        int resultado;

        resultado =  nUmerosMultiplicar [0] * nUmerosMultiplicar [1] * nUmerosMultiplicar [2];

        printf("\nEl resultado es %i \n", resultado);

        


    return 0;
}