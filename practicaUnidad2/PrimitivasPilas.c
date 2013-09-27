#include <stdio.h>
#include "PrimitivasPilas.h"

void crearPila(t_pila*pp)
{
    *pp=NULL;  // PARA CREARLA PONGO EN NULL EL PUNTERO
}
int ponerEnPila(t_pila*pp, const t_dato *pd)
{
    t_nodo *pn =(t_nodo*)malloc(sizeof(t_dato));
    if(!pn)
        return PILA_LLENA;
    pn->info=*pd;
    pn->psig=*pp;
    *pp=pn;
    return TODO_OK;

}
int sacarDePila(t_pila *pp, t_dato *pd)
{
    t_nodo *pn;
    if(*pp==NULL)
        return PILA_VACIA;
    *pd=pn->psig;
    free(pn);
    return TODO_OK;
}
int topeDePila(const t_pila *pp, t_dato *pd)
{
    if(!*pp)
        return PILA_VACIA;
    *pd=(*pp)->info;
    return TODO_OK;
}
void vaciarPila(t_pila * pp)
{
    t_nodo *pn;
    while(*pp)
    {
        pn = *pp;
        *pp=(*pp)->psig;
        free(pn);
    }
}
int pilaLlena(const t_pila *pp)
{
    t_nodo *pn =(t_nodo*)malloc((sizeof(t_nodo)));
    free (pn);
    return pn==NULL;
}
