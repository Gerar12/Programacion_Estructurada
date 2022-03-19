//Los arreglos se le define el TIpo de dato, nombre y tamaño 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Areglos udimencioanles \n");

//Se pone [ ] para indicar cuantos arrelgos contendra nuestra lista...
    int listas[3];
    
//Se manda a llamar el nombre dela lista y la posision para indicar que valor tendra
    listas[0] = 1;
    listas[1] = 5;
    listas[2] = 7;


//Tambien podemos definir los valres desde el comienzo con el sigueinte ejemplo flotante
float floatList[] = {23.3, 34.5, 32.4, 44.2};
// En este ejemplo podemos ver que contiene 4 areglos

//Ejemplo caracteres
// IMPORTANTE DATO DE PONER LAS COMIILAS SIMPLES '''''' esas no las otras 
char listaCaracteres[5]; 
    listaCaracteres[0] = 'd';
    listaCaracteres[1] = 'i';
    listaCaracteres[2] = 'a';
    listaCaracteres[3] = 'n';
    listaCaracteres[4] = 'a';


printf("\n Mi primer entero sera igual a: %i \n", listas[0]);

printf("\n Mi primer Flotante sera igual a: %f \n", floatList[0]);

printf("\nLista de caracteres: \t %c%c%c%c%c. \n", listaCaracteres[0], listaCaracteres[1], listaCaracteres[2], listaCaracteres[3], listaCaracteres[4]);


    return 0;
}