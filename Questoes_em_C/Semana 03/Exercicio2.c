#include <stdio.h>

int valor;

int verificador(int x)
{
    if (x % 2 == 0)
    {
        return (1);
    }

    else
    {
        return (0);
    }
}

int main()
{
    scanf("%d", &valor);

    int resultado;

    resultado = verificador(valor);

    if (resultado == 1)
    {
        printf("eh par");
    }
    else
    {
        printf("eh impar");
    }

    return (0);
}