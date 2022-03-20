#include<stdio.h>
#include<string.h>

int main()
{
    printf("Cadena de Caracteres.\n\n");

    char nameC[50];

    int size;

    printf("Ingresa el nombre con gets: \n");
    
    gets(nameC);

    printf("El nombre es: ");
    puts(nameC);

    size = strlen(nameC);

    printf("\nEl largo dela cadena es: %i \n\n", size);














    return 0;
}