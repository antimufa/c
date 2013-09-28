#include <stdio.h>
#include "PracticaLista.h"
int insertarEnListaOrdAsc(t_lista * pl, const t_dato *pd, t_cmp cmp)
{
	t_nodo *pn:
	int comp;
	while (*pl && (comp =(cpm(&(*pl)->info, pd))<0);  // *pd es el contendido, no la direccion, por eso pongo -> porque seria como poner nodo.info.
		pl=(*pl)->psig;
	if(*pl&&comp==0)
		return DUPLICADO;
	pn=(t_nodo*)malloc(sizeof(t_nodo);
	if(!pn)return 0;
	pn->info=*pd;
	pn-psig=*pl;
	*pl=pn;
	return TODO_OK;
}
int eliminarDeListaOrdAsc(t_lista * pl, t_dato *pd, t_cmp cmp)
{
	t_nodo *pn;
	cmt comp;
	while(*pl &&(comp=cmp(&(*pl)->info,pd))<0)
		pl=&(*pl)->psing;
	if(!*pl || comp>0)
		return 0;
	pn=*pl;
	*pl=(*pl)->psig; // *pl=pn->psig;
	*pd=pn->info;
	free(pn);
	return TODO_OK;
}
int buscarEnLista(const t_lista * pl, t_dato *pd, t_cmp cmp)
{
	t_nodo *pn=*pl;
	cmt comp;
	while (pn && comp=cmp(&pn->info , pd)) < 0)
		pn=pn->psing;
	if(!pn || comp > 0)
		return 0;
	*pd = pn->info;
	return 1;
}
