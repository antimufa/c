#include <stdio.h>
#include <stdlib.h>
typedef struct
{
   char letras[60];
   int f;
    int  entero;
    float flotante;
}datos;
int main()
{   datos d[10];
    int i=0;
    FILE * pf;
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
