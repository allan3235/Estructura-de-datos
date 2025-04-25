#include <stdio.h>
#include <stdlib.h> 
typedef struct arboles
{
    int dat;
    struct arboles *izq;
    struct arboles *der;

} Arboles;
Arboles *raiz =NULL;
void msg1()
{
    printf("1-Agregar\n");
    printf("2-Imprimir posOrder\n");
    printf("3-Imprimir Preorder\n");
    printf("4-Inorder\n");
    printf("-1-Salir\n");

}
struct arboles *CrearNodo(int dat)
{
    struct arboles *nuevo = (struct arboles *)malloc(sizeof(struct arboles));
    nuevo->dat = dat;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    return nuevo;

}


struct arboles *insertar(struct arboles *raiz, int dat)
{
    if(raiz == NULL)
    {
        return CrearNodo(dat);
    }
    if(dat>raiz->dat)
    {
        raiz->der = insertar(raiz->der,dat);    
    }
    if(dat<raiz->dat)
    {
        raiz->izq = insertar(raiz->izq,dat);
    }
    return raiz;
}

void preorden(struct arboles *raiz)
{
    if (raiz == NULL)
    {  
       return;
    }
    printf("%d", raiz->dat); //Se imprime raiz
    preorden(raiz->izq);
    preorden(raiz->der);
}

void Inorder(struct arboles *raiz)
{
    if (raiz == NULL)
    {  
       return;
    }
    Inorder(raiz->izq);
    printf("%d", raiz->dat); //Se imprime raiz
    Inorder(raiz->der);
    
}

void posorden(struct arboles *raiz)
{
    if (raiz == NULL)
    {  
       return;
    }
    posorden(raiz->izq);
    posorden(raiz->der);
    printf("%d", raiz->dat); //Se imprime raiz

}


