#include <stdio.h>

int a, b;

int *prta = &a;
int *prtb = &b;

int soma(int *a, int *b)
{
    *a = *a * 2;
    *b = *b * 2;
}

int main()
{

    scanf("%d %d", &a, &b);

    soma(prta, prtb);

    printf("O dobro dos valores de A e B são: %d %d.", a, b);

    return (0);
}