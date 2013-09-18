#include "funciones.h"
void verArchivo(FILE * pf)
{
    int i;
    datos d;
    pf= fopen("arch.bin","rb");
   if(!pf)
    {
        printf("Error al abrir el archivo");
        exit(1);
    }
    fread(&d,sizeof(datos),1,pf);
    while (!feof(pf))
    {
        printf("\n ESCRITURA %s\n NUMERO %d\t FLOAT: %f\n",d.letras,d.entero,d.flotante);
        fread(&d,sizeof(datos),1,pf);
        i++;
    }
fclose(pf);
}
