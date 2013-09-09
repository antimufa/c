#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

void ejercicio29() //suma de elementos
{
    int matriz[N][N],i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            printf("valor de la posicion [%d][%d] en la matriz: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    printf("\n\nLa suma de la matriz superiores sin diagonal principal es: %d \n",sumTriangSuperior(&matriz,N,N));
    printf("La suma de la matriz superiores con diagonal principal es: %d \n",sumTriangSuperiorCondiag(&matriz,N,N));
    printf("La suma de la matriz superiores sin diagonal sececundaria es: %d \n",sumSuperiorDiagSecun(&matriz,N,N));
    printf("La suma de la matriz inferiores sin diagonal principal es: %d \n",sumTriangInferior(&matriz,N,N));
}

void ejercicio30()
{
    int matriz[N][N],i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            printf("valor de la posicion [%d][%d] de la matriz: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    printf("La suma de la diagonal principal de la matriz es:\t %d \n",sumdiagprincipal(&matriz,N,N));
    printf("La suma de la diagonal secundaria de la matriz es:\t %d \n",sumdiagsecundaria(&matriz,N,N));
}

void ejercicio31()
{
    int matriz[N][N],i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            printf("Ingrese el valor [%d][%d] de la matriz: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    if(esidentidad((int *)matriz,N,N)==0)
        printf("es matriz identidad\n");
    else
        printf("no es matriz identidad\n");
}

int sumTriangSuperior(int *m,int fila, int columna)
{

    	int r=0,i,j;
	for(i=0;i<fila;i++)
        	for(j=0;j<columna;j++)
			if(j>i)
				r+= *(m+i*columna+j);
        return r;
}

int sumTriangSuperiorCondiag(int *m,int fila, int columna)
{

    	int r=0,i,j;
	for(i=0;i<fila;i++)
        	for(j=0;j<columna;j++)
			if(j>i||j==i)
				r+= *(m+i*columna+j);
        return r;
}

int sumTriangInferior(int *m,int fila, int columna)
{

    	int r=0,i,j;
	for(i=0;i<fila;i++)
        	for(j=0;j<columna;j++)
			if(j<i)
				r+= *(m+i*columna+j);
        return r;
}

int sumSuperiorDiagSecun(int *m,int fila, int columna)
{

    int r=0,i,j;
	for(i=0;i<fila;i++)
        for(j=0;j<columna;j++)
			if(i+j<N-1)
				r+= *(m+i*columna+j);
        return r;
}

int sumdiagprincipal(int *m,int f, int c)
{

    	int r=0,i,j;
	for(i=0;i<f;i++)
        	for(j=0;j<c;j++)
			if(j==i)
				r+= *(m+i*c+j);
        return r;
}

int sumdiagsecundaria(int *m,int fila, int columna)
{

    	int r=0,i,j;
	for(i=0;i<fila;i++)
        	for(j=0;j<columna;j++)
			if(i+j==N-1)
				r+= *(m+i*columna+j);
        return r;
}

int esidentidad(int *m,int fila, int columna)
{
    int r=0,i,j;
	for(i=0;i<fila;i++)
        for(j=0;j<columna;j++)
			if(i!=j&& *(m+i*columna+j) != 0)
				r++;
    return r;
}
