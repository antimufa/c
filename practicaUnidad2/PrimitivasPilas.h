#ifndef PRIMITIVASPILAS_H_INCLUDED
#define PRIMITIVASPILAS_H_INCLUDED
#define PILA_LLENA 0
#define PILA_VACIA 0
#define TODO_OK 1
typedef int t_dato;
typedef struct s_nodo
{
	t_dato info;
	struct s_nodo * psig;
}t_nodo;
typedef t_nodo * t_pila;
void crearPila(t_pila *);
int ponerEnPila(t_pila*,const t_dato *);
int sacarDePila(t_pila *,t_dato *);
int topeDePila(const t_pila *, t_dato *);
void vaciarPila(t_pila *);
int pilaLlena(const t_pila *);



#endif // PRIMITIVASPILAS_H_INCLUDED
