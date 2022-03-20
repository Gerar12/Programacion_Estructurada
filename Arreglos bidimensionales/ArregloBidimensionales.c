//Para declarar un arreglo bidimensional es necesario que tenga
//Los sigueines datos 
//tipo de dato, nombre, fila y columna
//filas son horizontales, colunmas verticales

#include<stdio.h>

int main()

{

printf("Arreglo dibimensional \n");

int bidimencialArrgle[4][4];

    bidimencialArrgle[0][0] = 11 ;
    bidimencialArrgle[0][1] = 12 ;  
    bidimencialArrgle[0][2] = 13 ;
    bidimencialArrgle[0][3] = 14 ;

    bidimencialArrgle[1][0] = 29;
    bidimencialArrgle[1][1] = 28;
    bidimencialArrgle[1][2] = 27;
    bidimencialArrgle[1][3] = 25;

    bidimencialArrgle[2][0] = 35;
    bidimencialArrgle[2][1] = 37;
    bidimencialArrgle[2][2] = 38;
    bidimencialArrgle[2][3] = 39;

    bidimencialArrgle[3][0] = 40;
    bidimencialArrgle[3][1] = 41;
    bidimencialArrgle[3][2] = 42;
    bidimencialArrgle[3][3] = 43;

    printf("valor en (0,1): %i \n", bidimencialArrgle [0][0]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [0][1]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [0][2]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [0][3]);

    printf("valor en (0,1): %i \n", bidimencialArrgle [1][0]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [1][1]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [1][2]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [1][3]);

    printf("valor en (0,1): %i \n", bidimencialArrgle [2][0]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [2][1]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [2][2]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [2][3]);

    printf("valor en (0,1): %i \n", bidimencialArrgle [3][0]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [3][1]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [3][2]);
    printf("valor en (0,1): %i \n", bidimencialArrgle [3][3]);


return 0;



}