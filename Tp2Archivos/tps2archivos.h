#ifndef TPS2ARCHIVOS_H_INCLUDED
#define TPS2ARCHIVOS_H_INCLUDED
#include "..\Progra2 Archivos\fecha.h"
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
} t_informacion;

#endif // TPS2ARCHIVOS_H_INCLUDED
