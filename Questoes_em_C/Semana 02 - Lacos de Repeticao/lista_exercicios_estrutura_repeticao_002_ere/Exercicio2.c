#include <stdio.h>

int main()
{
    int a, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    while (scanf("%d", &a) && a >= 0)
    {
        if (a < 26)
        {
            intervalo1++;
        }

        if (a >= 26 && a <= 50)
        {
            intervalo2++;
        }

        if (a >= 51 && a <= 75)
        {
            intervalo3++;
        }

        if (a >= 76 && a <= 100)
        {
            intervalo4++;
        }
    }

    printf("Estao no intervalo [0-25] = %d numeros\n", intervalo1);
    printf("Estao no intervalo [26-50] = %d numeros\n", intervalo2);
    printf("Estao no intervalo [51-75] = %d numeros\n", intervalo3);
    printf("Estao no intervalo [76-100] = %d numeros\n", intervalo4);

    return (0);
}