#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Insira dois numeros :");

    scanf("%d %d", &a, &b);

    printf("O numero %d %s por %d.", a, (a % b == 0 ? "eh divisivel" : "nao eh divisivel"), b);

    return (0);
}