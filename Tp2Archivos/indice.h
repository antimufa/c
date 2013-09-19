#ifndef INDICE_H_INCLUDED
#define INDICE_H_INCLUDED

typedef struct
{
    long dni;
    unsigned nroReg;

}t_reg_indice;

void indCrear(t_indice*); //toma memoria para 100 elementos e inicializa la estructura a indice_vacio.
int indInsertar(t_indice*,const t_reg_indice*); //inserta en orden según el dni. Si no hay lugar en el array, tomar memoria para un 30 % más de lo que tenía.
int indEliminar(t_indice*,t_reg_indice*); //elimina un dni informado
int indBuscar(const t_indice*,t_reg_indice* reg_ind); // si el dni existe deja el regustro en reg_ind
int indCargar(t_indice*,const char* path); //carga el array desde un archivo ordenado
int indGrabar(const t_indice*,const char * path); //graba un archivo con el contenido del indice
void indVaciar(t_indice*); // deja el inice en suestado de vacio
int indPrimero(t_indice*,t_reg_indice* reg_ind); // deja el primer registro de indice en reg_ind
int indSiguiente (t_indice*,t_reg_indice*);
int indFin (const t_indice*); //devuelve verdad si a ultima operacion de accesso secuencial no entrego el registro por haber llegado al fin de la secuencia y falso en caso contrario
void indLiberar(t_indice*); //libera la memoria utilizada por el indice



#endif // INDICE_H_INCLUDED
