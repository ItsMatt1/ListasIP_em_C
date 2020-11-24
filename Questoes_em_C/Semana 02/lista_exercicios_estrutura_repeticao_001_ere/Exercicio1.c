#include <stdio.h>

int main()

{
    int x, soma_par = 0, soma_impar = 0;

    scanf("%d", &x);

    while (1000 >= x > 0)
    {
        if (x % 2 == 0)
        {
            soma_par = soma_par + x;
        }

        else if (x % 2 != 0)
        {
            soma_impar = soma_impar + x;
        }

        scanf("%d", &x);
    }

    printf("A soma dos valores pares eh de : %d\n", soma_par);

    printf("A soma dos valores impares eh de : %d\n", soma_impar);

    return (0);
}