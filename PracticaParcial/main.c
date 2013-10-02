#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10];
    int i, *p;
    for(i=0;i<10;i++) v[i]=i;

    for(i=0;i<10;i++) printf("\n%d",v[i]);

    p=v;
    for(i=0;i<10;i++)printf("\n%d",*p++);
    //TRAS CADA P++ EL PUNTERO SENIALA A LA SIGUIENTE POSICION
    return 0;
}
