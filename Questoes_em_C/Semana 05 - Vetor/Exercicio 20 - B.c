#include <stdio.h>

int main()
{
    int vetorA[10], vetorB[10], vetorC[10] = {0};

    for (int i = 0; i < 20; i++)
    {
        if (i < 10)
        {
            scanf("%d", &vetorA[i]);
        }
        else
        {
            scanf("%d", &vetorB[i - 10]);
            vetorC[i - 10] = (vetorA[i - 10] - vetorB[i - 10]);
        }
    }

    printf("Valores do vetor C: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorC[i]);
    }

    return (0);
}