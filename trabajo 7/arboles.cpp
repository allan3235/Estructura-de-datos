#include "arboles.h"

int main()
{
    int inic = 0;
    int menu = 0;
    int datonuevo;

     do
     {
        printf("      M E N U\n\n");
        msg1();
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            printf("Ingresa el dato para agregar al arbol\n");
            scanf("%d",&datonuevo);
            raiz = insertar(raiz,datonuevo);
         break;
        case 2:
            posorden(raiz);
            break;
        case 3:
            preorden(raiz);
            break;
        case 4:
            Inorder(raiz);
            break;
            
        default:
         break;
        }
     } while (menu!= -1);
     printf("saliendo adios");


}