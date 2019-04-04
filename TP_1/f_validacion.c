#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int convertCharToInt(char num[])
{
    int salida = 0;
    int i;

    for(i=0;i < strlen(num) - 1;i++)
    {
        salida = salida * 10 + (int)num[i] - 48;
    }

    return salida;
}

int validNumber(char num[])
{
    int i;

    for(i=0;i < strlen(num) - 1;i++)
    {
        if(!isdigit(num[i]))
        {
            return 0;
            break;
        }
    }

    return 1;

}

int getMaxMin(int* max, int* min, int orden)
{
    int numero = 0;
    char texto[5];

    printf("Ingrese un numero %i: \n", orden + 1);
    scanf("%s", texto);

    if(validNumber(texto))
    {
        numero = convertCharToInt(texto);

        if(orden == 0)
        {
            *max = numero;
            *min = numero;
        }
        if(numero > *max)
        {
            *max = numero;
        }

        if(numero < *min)
        {
            *min = numero;
        }

        return 1;
    }
    else
    {
        return 0;
    }
}

int IngreseNumero(char mensaje[], int* num)
{
    int salida = 0;
    char texto[] = "";
    printf("%i\n",*num);
    num = 0;

    printf(mensaje);
    scanf("%s",&texto[0]);

    salida = validNumber(texto);

    if(salida == 1)
        {
            int numx = convertCharToInt(texto);
            printf("xxx %i",numx);
            *num = numx;
            printf("texto %s, numero %i ", texto, *num);
        }
    else
        {
            printf("Dato invalido!");
        }

    return salida;

}
