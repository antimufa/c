#include "vectores.h"
#define N 5

void ejercicio22()
{
    int valor,ubicacion,i,r;
    int a[N];
    printf("ingrese el valor, su ubicacion\n");
     scanf("%d%d",&valor,&ubicacion);
    for (i=0;i<N;i++)
        a[i]=0;
    insercionEnVector(&a,valor,ubicacion);
    for (i=0; i<N;i++)
        printf("%d \t",a[i]);
}
void ejercicio24()
{
    int valor, ubicacion,i,t;
    printf("ingrese la ubicacion a borrar\n");
     scanf("%d",&ubicacion);
    int a[N];
    for (i=0;i<N;i++)
    a[i]=i+1;
    eliminarPos(&a,ubicacion);
    for (i=0;i<N;i++)
    printf("%d\t",a[i]);
}
int insercionEnVector(int a[N] ,int v,int ubi)
{
    a[ubi-1]=v;
}

/*int polinodromo (char c[]) // char * c ( seria lo mismo) "ejecicio de vector"
{
    int len, i;
   // char caux[];//un auxiliar para guardar los datos originales
    len=strlen(c);
    while (c[i]!='\0' && i<((len-1)/(2)))
           {
           if  (c[i]== c[(len-1)-i])
            i++;
            }
    if (i==((len-1)/2))
        return 1;
    else
        return 0;

} */
int eliminarPos (int v[], int n)
{
    if(v[n-1]!=0)
        v[n-1]=0;


}

