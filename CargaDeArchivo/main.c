#include <stdio.h>
#include <stdlib.h>
#include "..\Progra2 Archivos\FuncionesStruct.h"
#include "..\Progra2 Archivos\Fecha.h"

int main()
{   t_alumno alu[4]; int i=0,op;
    FILE * pf;
    //lectura
    pf=fopen("dato.bin","rb");
    if(!pf)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    printf("oprima 1 si desea ver el archivo y dejarlo como estaba");
    scanf("%d",&op);
    if (op==1)
    {
    verarchivo(pf);
    fclose(pf);
    }
    else
    {//escritura
        pf=fopen("dato.bin","wb");
        if(!pf)
        {
            printf("Error al abrir el archivo");
            exit(1);
        }
        do
        {
                printf("ingrese el Legajo");
                fflush(stdin);
                scanf("%d",&alu[i].legajo);
                printf("ingrese el nombre:");
                fflush(stdin);
                gets(alu[i].ayn);
                printf("Ingrese la fecha de ingreso:");
                fflush(stdin);
                scanf("%d/%d/%d",&alu[i].fechaIng.dia,&alu[i].fechaIng.mes,&alu[i].fechaIng.anio);
                printf("Ingrese el estado:");
                fflush(stdin);
                scanf("%c",&alu[i].estado);
                fwrite(&alu[i],sizeof(t_alumno),1,pf);
                i++;
            }while(alu[i-1].legajo!=0 && i<5 ); //i-1 por que sino nunca compara con el recien ingresado
        entradaaleatoria(&pf); //modifica los valores del 1 1 2000
        fclose(pf);
        printf("oprima 1 si desea ver el archivo");
        scanf("%d",&op);
        if (op==1)
            verarchivo(pf);
    return 0;
    }
}
