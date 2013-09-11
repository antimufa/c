#include <stdio.h>
#include <stdlib.h>
#include "..\Progra2 Archivos\FuncionesStruct.h"
typedef struct {int d,m,a;}t_fecha;
typedef struct
{
    int legajo;
    char ayn [30];
    t_fecha fechaIng;
    char estado;
}t_alumno;
int main()
{   t_alumno alu[4]; int i=0;
    FILE * pf;
    pf=fopen("dato.bin","wb");
    if(!pf)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    printf("ingrese el Legajo");
    scanf("%d",&alu[i].legajo);
    do
    {
        printf("ingrese el nombre:");
        gets(alu[i].ayn);
        printf("Ingrese la fecha de ingreso:");
        scanf("%d%d%d",&alu[i].fechaIng[i].d,&alu[i].fechaIng.m,&alu[i].fechaIng.a);
        printf("Ingrese el estado:");
        scanf("%c",&alu[i].estado);
        fwrite(&alu[i],sizeof(t_alumno),1,pf);
        i++;

    }while(alu[i].legajo=!0 && i<5 );


}
