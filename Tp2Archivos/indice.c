#include <stdio.h>
#include "indice.h"
<<<<<<< HEAD
#include <stdlib.h>
#define PILA_LLENA 0
#define
=======

int indCrear (t_indice * indice)
{
    indice= (t_reg_indice*) malloc(sizeof(t_reg_indice)* MAX_INDICE); // se reserva el tamanio de indice (100)
    if (!indice)
        return 0;
    return 1;
}
>>>>>>> 615921a858e899ea1b526b868af443e0e325fbd7
