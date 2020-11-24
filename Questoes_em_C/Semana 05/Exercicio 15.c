#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetorA[5];
    int x;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite o codigo: \n");

    scanf("%d", &x);

    if (x == 0)
    {
        exit(0);
    }
    else if (x == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d", vetorA[i]);
        }
    }
    else if (x == 2)
    {
        for (int i = 4; i >= 0; i--)
        {
            printf("%d", vetorA[i]);
        }
    }
    else
    {
        printf("O codigo eh invalido!\n");
    }

    return (0);
}