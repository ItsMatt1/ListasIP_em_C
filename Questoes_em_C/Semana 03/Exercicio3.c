#include <stdio.h>

int valor;

int verificador(x)
{
    if (x > 0)
    {
        return (1);
    }
    else if (x == 0)
    {
        return (0);
    }
    else
    {
        return (-1);
    }
}

int main()
{
    scanf("%d", &valor);

    int resultado = verificador(valor);

    if (resultado == 1)
    {
        printf("%d eh positivo", valor);
    }
    else if (resultado == 0)
    {
        printf("%d eh igual a zero", valor);
    }
    else
    {
        printf("%d eh negativo", valor);
    }

    return (0);
}