#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int *prta = &a, *prtb = &b;

    if (prta > prtb)
    {
        printf("O contéudo da variável de maior endereço é %d\n", *prta);
    }
    else
    {
        printf("O contéudo da variável de maior endereço é %d\n", *prtb);
    }

    return (0);
}