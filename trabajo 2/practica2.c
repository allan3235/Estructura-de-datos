#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona {
    char nombre[20];
    int edad;
} datos_persona;

void apuntadoresarreglo(int *arreglof);
void apuntadoresestructura(struct persona *persona1);

int main()
{
    struct persona datos;
    

    int variable1 = 10;
    int* apuntador1;
    apuntador1 = &variable1;
    printf("El valor de la variable1 es: %d\n", variable1);
    printf("La direccion de memoria de la variable1 es: %p\n", &variable1);
    printf("El valor del apuntador1 es: %p\n", apuntador1);
    printf("El valor al que apunta el apuntador1 es: %d\n", *apuntador1);
    printf("\n\n");
    printf("Parte 2\n");

    int* apuntador2;
    int variable2 = 3;
    apuntador2 = &variable2;
    variable1 = *apuntador2;
    printf("El valor de la variable1 es: %d\n", variable1);

    printf("\n\n");
    printf("Parte 3\n");

    int arreglo[5] = {12, 25, 33, 44, 58};
    int* apuntador3;
    apuntador3 = arreglo;
    for (int i = 0; i < 5; i++)
    {
        printf("El valor del elemento %d del arreglo es: %d\n", i, apuntador3[i]);

    }
    printf("\n\n");
    printf("Parte 4\n");
    apuntadoresarreglo(apuntador3);

    printf("\n\n");
    printf("Parte 5\n");
    apuntadoresestructura(&datos_persona);
    printf("Nombre: %c\n",datos_persona.nombre);
    printf("Ead: %d\n",datos_persona.edad);

}

void apuntadoresarreglo(int *arreglof)
{
    for (int i = 0; i < 5; i++)
    {
        printf("El valor del elemento %d del arreglo es: %d\n", i, arreglof[i]);

    }
}

void apuntadoresestructura(struct persona *persona1)
{
    char nombrer[7] = "Allan";
    int edadr = 20;
    char* apuntador5;
    int* apuntador4;
    apuntador5 = nombrer; 
    apuntador4 = &edadr;
    strcpy(persona1->nombre, apuntador5); 
   
    persona1->edad = *apuntador4;

   
}

