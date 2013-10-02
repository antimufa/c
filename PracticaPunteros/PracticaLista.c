#include <stdio.h>
#include "PracticaLista.h"
#include "..\Tp2Archivos\estructurasNLCP.h"
int cmp(const void * pv1, const void * pv2)
{
    t_dato * pl1=(t_dato*)pv1;
    t_dato * pl2=(t_dato*)pv2;
    if(pl1<pl2)
        return -1;
    if(pl1 >pl2)
        return 1;
    return 0;
}

int insertarEnListaOrdAsc(t_lista * pl, const t_dato *pd, t_cmp cmp)
{
	t_nodo *pn;
	int comp;
	while(*pl && (comp=cmp(&(*pl)->info, pd))<0)  // *pd es el contendido, no la direccion, por eso pongo -> porque seria como poner nodo.info.
		pl=(*pl)->psig;
	if(*pl&&comp==0)
		return DUPLICADO;
	pn=(t_nodo*)malloc(sizeof(t_nodo));
	if(!pn)return 0;
	pn->info=*pd;
	pn->psig=*pl;
	*pl=pn;
	return TODO_OK;
}
int eliminarDeListaOrdAsc(t_lista * pl, t_dato *pd, t_cmp cmp)
{
	t_nodo *pn;
	int comp;
	while(*pl &&(comp=cmp(&(*pl)->info,pd))<0)
		pl=&(*pl)->psig;
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
	int comp;
	while (pn && (comp=cmp(&pn->info , pd)) < 0)
		pn=pn->psig;
	if(!pn || comp > 0)
		return 0;
	*pd = pn->info;
	return 1;
}
void ordenarEnLista(t_lista *pl,t_cmp cmp,t_inter inter)
{
    t_nodo *pri,*men,*act;
    if(!*pl)
        return 0;
    pri=*pl;
    while(pri->psig!=NULL)
    {
        men=pri;
        act=pri->psig;
        while(act!=NULL)
        {
            if(cmp(&act->info,&men->info)<0)
                men=act;
            act=act->psig;

        }
        if(men!=pri)
            inter(&men->info,&pri->info);
        pri=pri->psig;
    }
}
