#ifndef OPERACIONESMATEMATICAS_H_INCLUDED
#define OPERACIONESMATEMATICAS_H_INCLUDED
int sumar(int numero1, int numero2)
{
    int resultado;
    resultado= numero1+numero2;
    printf("La suma es:%i\n",resultado);
    return resultado;
}
int resta(int numero1, int numero2)
{
    int resultado;
    resultado= numero1-numero2;
    printf("La resta es:%i\n",resultado);
    return resultado;
}
int multip(int numero1, int numero2)
{
    int resultado;
    resultado= numero1*numero2;
    printf("El producto es:%i\n",resultado);
    return resultado;
}
int divis(int numero1, int numero2)
{
    int resultado;
    if(numero1 != 0 && numero2 != 0)
    {
        resultado= numero1/numero2;
        printf("La division es:%d\n",resultado);
    }
    else
        {
            printf("No se puede dividir por Cero... !\n");
        }

        return resultado;
}

int factoreo(int numero1, int numero2)
{
    int resultado1 = 1;
    int resultado2 = 1;

    for ( int i = numero1; i >= 1; i--)
    {
        resultado1 *= i;
        printf("%d\t", resultado1);
    }
    printf("\n\nel resultado del factorial indicado es: %d\n\n", resultado1);

    for ( int i = numero2; i >= 1; i--)
    {
        resultado2 *= i;
        printf("%d\t", resultado2);
    }
    printf("\n\nel resultado del factorial indicado es: %d\n\n", resultado2);
    return 0;
}


#endif // OPERACIONESMATEMATICAS_H_INCLUDED
