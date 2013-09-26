#ifndef COLAS_H_INCLUDED
#define COLAS_H_INCLUDED
#define COLA_LLENA 0
#define COLA_VACIA 0
#define TODO_OK 1
typedef int t_dato;
typedef struct s_nodo
{
    t_dato info;
    struct s_nodo6 * psig;
}t_nodo;
typedef struct{
 t_nodo * frente, *cola;
 }t_cola;

void crear_cola(t_cola*pc);
int cola_vacia(const t_cola * pc);
int  poner_en_cola(t_cola * pc, const t_dato * pd);
int sacar_de_cola (t_cola * pc,t_dato * pd);
int frente_de_cola (const t_cola * pc, t_dato * pd ); // constante ya que no se modifica la cola
void vaciar_cola (t_cola * pc);
#endif // COLAS_H_INCLUDED
