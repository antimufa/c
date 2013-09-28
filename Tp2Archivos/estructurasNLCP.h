#ifndef ESTRUCTURASNLCP_H_INCLUDED
#define ESTRUCTURASNLCP_H_INCLUDED
typedef int t_dato;
typedef struct s_nodo
{
	t_dato info;
	struct s_nodo * psig;
}t_nodo;
typedef t_nodo * t_pila;

typedef int t_cmp;
typedef cmp((*t_cmp),(const void *));

typedef struct t_lista{ //revisar
        char nombre[20];
        char telefono[12];
        struct lista *siguiente;
        }t_lista;
typedef struct{
 t_nodo * frente, *cola;
 }t_cola;



#endif // ESTRUCTURASNLCP_H_INCLUDED
