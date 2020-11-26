#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Informe tres numeros :\n");

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("O numero %d eh o maior\n", a);
    }

    if (b > c && b > a)
    {
        printf("O numero %d eh o maior\n", b);
    }

    if (c > a && c > b)
    {
        printf("O numero %d eh o maior\n", c);
    }

    return (0);
}