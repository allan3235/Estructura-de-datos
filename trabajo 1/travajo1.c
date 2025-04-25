#include <stdio.h>
#include <stdlib.h>


void ventasd(int ventas[30]);
void estadisticas(int ventas[30],int estadisticasgenerales[6]);
void visualizarventas(int estadisticasgenerales[6]);

int main() 
{
    int ventas[30];
    int estadisticasgenerales[6];
    ventasd(ventas);
    estadisticas(ventas,estadisticasgenerales);
    visualizarventas(estadisticasgenerales);
    return 0;
}

void ventasd(int ventas[30])
{
    for(int i = 0; i <=  29; i++)
    {
        printf(" Cual es la venta del dia %d: ", (i+1));
        scanf("%d", &ventas[i]);

    }
    
}


void estadisticas(int ventas[30],int estadisticasgenerales[6])
{
    int suma = 0, promedio = 0, mayor = 0, menor = ventas[0];
    for(int i = 0; i <= 29; i++)
    {
        suma = suma + ventas[i];
        if(ventas[i] > mayor)
        {
            mayor = ventas[i];
            estadisticasgenerales[5] = i+1;
            
        }
        if(ventas[i] < menor)
        {
            menor = ventas[i];
        }
    }
    promedio = suma / 30;
    estadisticasgenerales[0] = suma;
    estadisticasgenerales[1] = promedio;
    estadisticasgenerales[2] = mayor;
    estadisticasgenerales[3] = menor;
}

void visualizarventas(int estadisticasgenerales[6])
{
    printf("La suma de las ventas es: %d\n", estadisticasgenerales[0]);
    printf("El promedio de las ventas es: %d\n", estadisticasgenerales[1]);
    printf("La venta mayor es: %d es del dia %d \n", estadisticasgenerales[2],estadisticasgenerales[5]);
    printf("La venta menor es: %d\n", estadisticasgenerales[3]);

}