#include <stdio.h>
#include <stdlib.h>
#include "PrimitivasPilas.h"

int main()
{
    t_dato aux; // declaro un tipo de dato
    t_pila pp; // declaro un tipo de puntero de pila
    crearPila(&pp); // envio esa direccion y la pongo en null
    scanf("%d",&aux);
    ponerEnPila(&pp,&aux); // envio el dato la pila
    scanf("%d",&aux);
    ponerEnPila(&pp,&aux);
    topeDePila(&pp,&aux); // agarro el topo de la pila
    printf("%d",aux);
    return 0;
}
