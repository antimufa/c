#include <stdio.h>
#include "FuncionesStruct.h"
#include "fecha.h"
#include "fecha.c"

void entradaAleatoria(FILE * pf)
{
    t_alumno alu;
    t_fecha fp={1,1,2000};
    pf= fopen("dato.bin","r+b");
   if(!pf)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    fread(&alu,sizeof(t_alumno),1,pf);
    while (!feof(pf))
    {
        if (fechacmp(&alu.fechaIng,&fp)<0 && alu.estado!='b')
        {
            alu.estado='b';
            fseek(pf,-1L*sizeof(t_alumno),SEEK_CUR);
            fwrite(&alu,sizeof(t_alumno),1,pf);
            fseek(pf,0L,SEEK_CUR);
        }
        fread(&alu,sizeof(t_alumno),1,pf);
    }
    fclose(pf);
}
void verarchivo(FILE * pf)
{
    int i;
    t_alumno alu;
    pf= fopen("dato.bin","rb");
   if(!pf)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    fread(&alu,sizeof(t_alumno),1,pf);
    while (!feof(pf))
    {
        printf("\n LEGAJO %d\t NOMBRE %s\t FECHA: %d/%d/%d\tESTADO> %c\n",alu.legajo,alu.ayn,alu.fechaIng.dia,
               alu.fechaIng.mes,alu.fechaIng.anio,alu.estado);
        fread(&alu,sizeof(t_alumno),1,pf);
        i++;
    }
fclose(pf);
}
