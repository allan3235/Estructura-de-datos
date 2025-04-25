#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct cola
{
    int cliente;
    struct cola *siguiente;

} Cola;

Cola *frente;
Cola *final;
Cola *caja1;
Cola *caja2;
Cola *caja3;
void cola_agregar(int dat);
void imprimir();
int contar();


void datos_inicio()
{
    for(int i =0;i <10;i++)
    {
        cola_agregar(i+101);
    }
}

void cola_agregar(int dat) {
    Cola *nueva = (Cola *)malloc(sizeof(Cola));
    nueva->cliente = dat;
    nueva->siguiente = NULL;

    if (frente == NULL) 
    {
        frente = nueva;
        final = nueva;
    } 
    else 
    {
        nueva->siguiente = frente;
        frente = nueva;
    }
}

void imprimir()
{
   if(final == NULL)
   {
    printf("No hay clientes en esperas \nRecomendacion hacer publicidad de tu banco");

   }
   else
   {
        Cola *temp = frente;
     while(true)
     {
        printf("[%d]",temp->cliente);
        printf("->");
        temp = temp->siguiente;
        if(temp == NULL)
        {
            printf("[/]");
            printf("\n");
            break;
        }
        
     }
   }
}

int contar()
{
    int i =0;
    if(final == NULL)
   {
     return 0;
   }
   else
   {
        Cola *temp = frente;
     while(true)
     {
        i++;
        temp = temp->siguiente;
        if(temp == NULL)
        {
            return i;
        }
        
     }
   }
}

void vaciarcaja(Cola **caja) 
{
    if (*caja != NULL) 
    {
        free(*caja);
        *caja = NULL; 
    }
}

void mover_a_caja(Cola **caja) 
{
    if (frente == NULL) {
        printf("La cola está vacía, no hay elementos para mover.\n");
        return;
    }
    Cola *temp = frente;
    Cola *prev = NULL;

    if (frente == final) 
    {
        *caja = frente; 
        frente = NULL;
        final = NULL;
        return;
    }


    while (temp->siguiente != NULL) 
    {
        prev = temp;
        temp = temp->siguiente;
    }

    *caja = temp;
    prev->siguiente = NULL; 
    final = prev;           
}

void menu_text()
{
    if(caja1 == NULL)
    {
        printf("1- Pasar al cliente a la caja 1                   Caja1: Libre\n");
    }
    else
    {
        printf("1- Pasar al cliente a la caja 1                   Caja1: %d\n",caja1->cliente);
    }
    if(caja2 == NULL)
    {
        printf("2- Pasar al cliente a la caja 2                   Caja2: Libre\n");
    }
    else
    {
        printf("2- Pasar al cliente a la caja 2                   Caja2: %d\n",caja2->cliente);
    }
    if(caja3 == NULL)
    {
        printf("3- Pasar al cliente a la caja 3                   Caja3: Libre\n");
    }
    else
    {
        printf("3- Pasar al cliente a la caja 3                   Caja3: %d\n",caja3->cliente);
    }
    printf("4- Retirar a los clientes de la caja 1\n");
    printf("5- Retirar a los clientes de la caja 2\n");
    printf("6- Retirar a los clientes de la caja 3\n");
    printf("7- Registrar al nuevo cliente\n");
    printf("-1- Salir");
    printf("\n");

}