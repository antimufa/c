#ifndef PRIMITIVASPILAS_H_INCLUDED
#define PRIMITIVASPILAS_H_INCLUDED
#define PILA_LLENA 0
#define PILA_VACIA 0
#define TODO_OK
#include "structuras nlcp.h"

void crearPila(t_pila *);
int ponerEnPila(t_pila*,const t_dato *);
int sacarDePila(t_pila *,t_dato *);
int topeDePila(const t_pila *, t_dato *);
void vaciarPila(t_pila *);
int pilaLlena(const t_pila *);



#endif // PRIMITIVASPILAS_H_INCLUDED
