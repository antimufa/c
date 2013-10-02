#include <stdio.h>
#include "indice.h"

int indCrear (t_indice * indice)
{
    indice= (t_reg_indice*) malloc(sizeof(t_reg_indice)* MAX_INDICE); // se reserva el tamanio de indice (100)
    if (!indice)
        return 0;
    return 1;
}
int indInsertar(t_indice *indice,const t_reg_indice * reg_indice)
{
    int v[];


}
