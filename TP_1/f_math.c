#include <stdio.h>
#include <stdlib.h>
#include "f_validacion.h"

int getSuma()
{
    int a = 1;
    int b = 1;
    int resultado;

    /*printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
*/
    if (IngreseNumero("Ingrese el primer numero: ", &a) == 1 && IngreseNumero("Ingrese el segundo numero: ", &b) == 1 )
        {
            resultado = a + b;
            printf("El resultado es: << %d >>",resultado);
        }

    return 0;

}

int getResta()
{
    int a;
    int b;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);

    resultado = a - b;

    printf("El resultado es: << %d >>",resultado);

    return 0;

}

int getMultiplicacion()
{
    int a;
    int b;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);

    resultado = a * b;

    printf("El resultado es: << %d >>",resultado);

    return 0;

}

int getDivision()
{
    int a;
    int b;
    int resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);

    resultado = a / b;

    if(b != 0)
        {
            printf("El resultado es: << %d >>",resultado);
        }
    else
        {
            printf("ERROR: No se puede dividir por 0");
        }

    return 0;
}

int getFactoreo()
{
    return 0;
}
