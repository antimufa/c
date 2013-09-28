#ifndef PRACTICALISTA_H_INCLUDED
#define PRACTICALISTA_H_INCLUDED
#include <stdio.h>
typedef int t_dato;
typedef int t_cmp;
typedef cmt((*t_cmp),(const void *));
typedef struct s_nodo
 {
	t_dato info;
	struct s_nodo * psig;
}t_nodo;
typedef struct t_lista{
        char nombre[20];
        char telefono[12];
        struct lista *siguiente;
        }t_lista;

int insertarEnListaOrdAsc(t_lista *, const t_dato *, t_cmp);
int eliminarDeListaOrdAsc(t_lista *, t_dato *, t_cmp);
int buscarEnLista(const t_lista *, t_dato *, t_cmp);


#endif // PRACTICALISTA_H_INCLUDED
