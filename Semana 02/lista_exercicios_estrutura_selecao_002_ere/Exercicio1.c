#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Insira um numero : \n");

    scanf("%d", &x);

    printf("O numero %d eh : %s", x, x % 2 == 0 ? "par" : "impar");

    return (0);
}