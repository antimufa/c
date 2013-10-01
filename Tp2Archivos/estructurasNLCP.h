#ifndef ESTRUCTURASNLCP_H_INCLUDED
#define ESTRUCTURASNLCP_H_INCLUDED
//DATO INT
typedef int t_dato;
//ESTRUCTURA DE NODO
typedef struct s_nodo
{
	t_dato info;
	struct s_nodo * psig;
}t_nodo;
//NODO
typedef t_nodo * t_pila;

typedef int t_cmp;
//FUNCION DE COMPARACION
typedef cmp((*t_cmp),(const void *, const void *));
//FUNCION DE INTERCAMBIO
typedef void (*t_inter)(void *,void *);
//ESTRUCTURA DE LISTA
typedef struct t_lista{ //revisar
        char nombre[20];
        char telefono[12];
        struct lista *siguiente;
        }t_lista;
//ESTRUCTURA DE COLA
typedef struct
{
    t_nodo * frente, *cola;
 }t_cola;



#endif // ESTRUCTURASNLCP_H_INCLUDED
