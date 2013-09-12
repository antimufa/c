#ifndef FUNCIONESSTRUCT_H_INCLUDED
#define FUNCIONESSTRUCT_H_INCLUDED
#include "fecha.h"
typedef struct
{
    int legajo;
    char ayn [30];
    t_fecha fechaIng;
    char estado;
}t_alumno;

void entradaaleatoria(FILE * );

#endif // FUNCIONESSTRUCT_H_INCLUDED
