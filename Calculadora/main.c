#include <stdio.h>
#include <stdlib.h>
#include "./Biblioteca/operacionesMatematicas.h"

int main()
{
    int nro1,nro2;
    char respuesta = 's';
    int operacion;

    while (respuesta == 's')
    {
        printf("### CALCULADORA DE OPERACIONES SIMPLES ###\n");
        printf("Ingrese un Numero Entero: ");
        scanf("%d",&nro1);
        printf("Ingrese un Numero Entero: ");
        scanf("%d",&nro2);

        system("cls");

        printf("1# Sumar:\n");
        printf("2# Resta:\n");
        printf("3# Multiplicar:\n");
        printf("4# Division:\n");
        printf("5# Factoreo:\n");

        do
        {
            printf("Que operacion desea realizar: ");
            scanf("%d",&operacion);
        }
        while ((operacion<1)||(operacion>5));

        system("cls");

        switch (operacion)
        {
        case 1:
            sumar(nro1, nro2);
            break;
        case 2:
            resta(nro1, nro2);
            break;
        case 3:
            multip(nro1, nro2);
            break;
        case 4:
            divis(nro1, nro2);
            break;
        case 5:
            factoreo(nro1,nro2);
            break;
        }

        do
        {
            printf("Desea realizar otra Operacion:(s/n)\n");
            scanf("%c",&respuesta);
        }
        while(respuesta!='s' && respuesta!='n');

        system("cls");
    }

    return 0;
}
