#include <stdio.h>
#include <stdlib.h>
#include "colas.h"
int main()

{
    t_dato aux;
    t_cola pc;
    crear_cola(&pc);
    scanf("%d",&aux);
    poner_en_cola(&pc,&aux);
    scanf("%d",&aux);
    poner_en_cola(&pc,&aux);
    sacar_de_cola(&pc,&aux);
    printf("\n%d",aux);
    sacar_de_cola(&pc,&aux);
    printf("\n%d",aux);
    return 0;
}
