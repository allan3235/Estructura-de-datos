#include "colas.h"


int main()
{
    datos_inicio();
    int menu = 0;
    int numero = 0;
    while (menu != -1)
    {
        imprimir();
        menu_text();
        scanf("%d",&menu);

        switch (menu)
        {
        case 1:
            mover_a_caja(&caja1);
            break;
        case 2:
            mover_a_caja(&caja2);
            break;
        case 3:
            mover_a_caja(&caja3);
            break;
        case 4:
            vaciarcaja(&caja1);
            break;
        case 5:
            vaciarcaja(&caja2);
            break;
        case 6:
            vaciarcaja(&caja3);
            break;
        case 7:
            printf("Dime el numero de boleto que quieres asignarle al cliente\n");
            scanf("%d",&numero);
            cola_agregar(numero);
            printf("\n");
        default:
            break;
        }
    }
    printf("Saliendo....... \n");
    
}