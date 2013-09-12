#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{   datos d[10];
    int i=0,op;
    FILE * pf;
    //lectura
    pf=fopen("arch.bin","rb");
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
    {


        pf=fopen("arch.bin","wb");
        if(!pf)
        {
            printf("Error al abrir el archivo");
            exit(1);
        }

        do
        {
            printf("ingrese texto (60 letras)");
                   fflush(stdin);
            gets(d[i].letras);
            printf("ingrese un numero entero:");
            fflush(stdin);
            scanf("%d",&d[i].entero);
            printf("Ingrese un numero con coma:");
            fflush(stdin);
            scanf("%f",&d[i].flotante);
            printf("si desea terminar S/N");
            scanf("%d",&d[i].f);;
            fwrite(&d[i],sizeof(datos),1,pf);
            i++;
    }while(d[i-1].f!=0 && i<20 ); //i-1 por que sino nunca compara con el recien ingresado

fclose(pf);
return 0;
}
}
