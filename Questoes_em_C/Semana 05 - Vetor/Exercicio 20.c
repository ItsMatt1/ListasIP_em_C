#include <stdio.h>

int main()
{
    int vetorA[10], vetorB[10], vetorC[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetorC[i] = (vetorA[i] - vetorB[i]);
    }

    printf("Valores do vetor C: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorC[i]);
    }

    return (0);
}