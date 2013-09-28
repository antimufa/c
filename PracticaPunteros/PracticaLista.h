#ifndef PRACTICALISTA_H_INCLUDED
#define PRACTICALISTA_H_INCLUDED
#include <stdio.h>
#include "..\Tp2Archivos\estructurasNLCP.h"
int insertarEnListaOrdAsc(t_lista *, const t_dato *, t_cmp);
int eliminarDeListaOrdAsc(t_lista *, t_dato *, t_cmp);
int buscarEnLista(const t_lista *, t_dato *, t_cmp);


#endif // PRACTICALISTA_H_INCLUDED
