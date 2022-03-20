// Solicion del reto...


#include<stdio.h>

int main()

{

printf("Arreglo dibimensional \n");

int resultadoFilas1;
int resultadoFila2;
int resultadoFila3;

int listaAA [3][4];

listaAA[0][0] = 1;
listaAA[0][1] = 1;
listaAA[0][2] = 1;
listaAA[0][3] = 1;

listaAA[1][0] = 4;
listaAA[1][1] = 2;
listaAA[1][2] = 2;
listaAA[1][3] = 2;

listaAA[2][0] = 8;
listaAA[2][1] = 8;
listaAA[2][2] = 4;
listaAA[2][3] = 6;

resultadoFilas1 = listaAA[0][0] + listaAA[0][1] + listaAA[0][2] + listaAA[0][3];
resultadoFila2 = listaAA[1][0] + listaAA[1][1] + listaAA[1][2] +listaAA[1][3];
resultadoFila3 = listaAA[2][0] + listaAA[2][1] + listaAA[2][2] + listaAA[2][3];

printf("El resultado dela suma dela primera fila es: %i\n", resultadoFilas1);
printf("El resultado dela suma dela segunda fila es: %i\n", resultadoFila2);
printf("El resultado dela suma dela tercera fila es: %i", resultadoFila3);

return 0;
}