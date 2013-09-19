#ifndef TPS2ARCHIVOS_H_INCLUDED
#define TPS2ARCHIVOS_H_INCLUDED
void verArchivo(FILE *);
typedef struct
{
    long dni;
    char nya[40];
    t_fecha fechaNacimiento;
    char sexo;
    t_fecha fechaIng;
    char carrera[4]; // inf, eco,der,adm
    int materiaAprobadas;
    t_fecha fechaUltMateriaAp;
    char estado;
    t_fecha fechaDeBaja;
} informacion;

#endif // TPS2ARCHIVOS_H_INCLUDED
