#include "colas.h"
#include <stdio.h>
 void crear_cola(t_cola*pc)
{
	pc -> frente = pc -> cola = NULL;
}
int cola_vacia(const t_cola * pc)
{
	return pc ->frente == NULL;
}

 int  poner_en_cola(t_cola * pc, const t_dato * pd)
 {
	t_nodo * pn=(t_nodo*) malloc (sizeof(t_nodo));
	if(!pn)
	return COLA_LLENA;
	pn-> info = *pd;  // se le pone a  info lo que habia en pd
	pn-> psig=NULL; //se pone en NULL porque va a pasar a ser el ultimo nodo
	if (pc -> cola) // si existe el nodo (si tiene algo distinto de NULL)
		pc-> cola -> psig = pn;  // se le asigna el nuevo colo
	else // se actualiza si no existe
		pc-> frente = pn;
	pc -> cola = pn;
	return TODO_OK;
}
int sacar_de_cola (t_cola * pc,t_dato * pd)
{
	t_nodo * pn= pc -> frente;
	if(pc->frente==NULL)
		return COLA_VACIA;
	*pd=pc-> frente -> info;
	pc -> frente = pc-> frente -> psig; //pn-> psig
	free (pn);
	if (!pc->frente)
		pc->cola=NULL;
	return TODO_OK;
}
int frente_de_cola (const t_cola * pc, t_dato * pd ) // constante ya que n o se modifica la cola
{
	if (pc->frente == NULL)// verificar si la cola no esta vacia // if (!pc->frente)
		return COLA_VACIA;
	*pd=pc->frente->info;
	return TODO_OK;
}
void vaciar_cola (t_cola * pc)
{
	t_nodo * pn;
	while (pc->frente)
	{
		pn=pc -> frente;
		pc-> frente= pc -> frente -> psig;
		free (pn);
	}
	pc -> cola=NULL;
}
