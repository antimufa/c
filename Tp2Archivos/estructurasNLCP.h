#ifndef ESTRUCTURASNLCP_H_INCLUDED
#define ESTRUCTURASNLCP_H_INCLUDED
#define DUPLICADO 0
#define TODO_OK 1
//DATO INT
typedef int t_dato;
//ESTRUCTURA DE NODO
typedef struct s_nodo
{
	t_dato info;
	struct s_nodo * psig;
}t_nodo;
//PILA
typedef t_nodo * t_pila;
//DECLARO LA LISTA
typedef t_nodo *t_lista;
//ESTRUCTURA DE COLA
typedef struct
{
    t_nodo * frente, *cola;
 }t_cola;
//FUNCION DE COMPARACION
typedef int (*t_cmp)(const void *, const void *);
//FUNCION DE INTERCAMBIO
typedef void (*t_inter)(void *,void *);





#endif // ESTRUCTURASNLCP_H_INCLUDED
