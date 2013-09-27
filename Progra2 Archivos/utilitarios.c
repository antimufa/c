#include "utilitarios.h"
#include <stdio.h>

// funciones
char menu(const char opc[][30], const char*titulo)
{
    char op=pedir_opcion (opc,titulo,"elija titulo\n");
    while (!strchr (opc[0],op))
        op=pedir_opcion(opc,titulo, "opcion erronea, ingresela nuevamente");
        system("cls");

    return op;
}

char pedir_opcion(const char opc[][30], const char* titulo, const char*msj)
{
    int cant,i ; char op;
    printf("\n\n\t %s \n",titulo);
    cant=strlen(opc[0]);
    for(i=0;i<cant;i++)
        printf("\n\t %c  %s",opc[0][i],opc[i+1]);
    printf("\n\n %s", msj);
    fflush(stdin);
    scanf("%c",&op);
    op=toupper(op); //lleva a mayuscula
    return op;

}
void pausa(const char *msj)
{
    if(*msj)
        printf("\n%s", msj);
    printf("\nPulse Enter para continuar...");
    fflush(stdin);
    scanf("%*c");
}
void finAnormal(const char * msj)
{
	pausa (msj);
	puts("\n se cancela el programa");
	exit (1);
}
void funcion_numeros()
{
    const char opcionesNumero[][30]={"1234V",
                               "ejercicio1",
                               "ejercicio2",
                               "ejercicio3",
                               "ejercicio4",
                               "Volver"
                               };
    char op;
    do{
        op=menu(opcionesNumero, "Menu de ejercicios numericos del TP1");
        switch(op){
            case '1': ejercicio1(); pausa(""); break;
            case '2': ejercicio2(); pausa(""); break;
            case '3': ejercicio3(); pausa(""); break;
            case '4': ejercicio4(); pausa(""); break;
        }
    } while(op!='V');
    pausa("Menu principal");

}
void funcion_fechas()
{
    const char opcionesNumero[][30]={"123V",
                               "ejercicio14",
                               "ejercicio15",
                               "ejercicio16",
                               "Volver"
                               };
    char op;
    do{
        op=menu(opcionesNumero, "Menu de ejercicios con fechas del TP1");
        switch(op){
            case '1': ejercicio14(); pausa(""); break;
            case '2': ejercicio15(); pausa(""); break;
            case '3': ejercicio16(); pausa(""); break;
        }
    } while(op!='V');
    pausa("Menu principal");

}
void funcion_vectores()
{
    const char opcionesNumero[][30]={"12V",
                               "ejercicio22",
                               "ejercicio24",
                               "Volver"
                               };
    char op;
    do{
        op=menu(opcionesNumero, "Menu de ejercicios con vectores del TP1");
        switch(op){
            case '1': ejercicio22(); pausa(""); break;
            case '2': ejercicio24(); pausa(""); break;

        }
    } while(op!='V');
    pausa("Menu principal");
}
void funcion_matrices()
{
const char opcionesNumero[][30]={"123V",
                               "ejercicio29",
                               "ejercicio30",
                               "ejercicio31",
                               "Volver"
                               };
    char op;
    do{
        op=menu(opcionesNumero, "Menu de ejercicios de matrices del TP1");
        switch(op){
            case '1': ejercicio29(); pausa(""); break;
            case '2': ejercicio30(); pausa(""); break;
            case '3': ejercicio31(); pausa(""); break;
        }
    } while(op!='V');
    pausa("Menu principal");
}
