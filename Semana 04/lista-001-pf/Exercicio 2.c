#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int *prta = &a, *prtb = &b;

    if (prta > prtb)
    {
        printf("O maior endereço é: %x\n", prta);
    }
    else
    {
        printf("O maior endereço é: %x\n", prtb);
    }

    return (0);
}