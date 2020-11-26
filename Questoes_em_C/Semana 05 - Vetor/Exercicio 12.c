#include <stdio.h>
#include <limits.h>

int main()
{
    int vetorA[5], maiorNum = INT_MIN, menorNum = INT_MAX, count = 0, media = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetorA[i]);

        media += vetorA[i];

        if (vetorA[i] > maiorNum)
        {
            maiorNum = vetorA[i];
        }
        if (vetorA[i] < menorNum)
        {
            menorNum = vetorA[i];
        }

        count++;
    }

    printf("Os valores do vetor sao :\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetorA[i]);
    }

    printf("\nO maior valor lido eh : %d\n", maiorNum);

    printf("O menor valor lido eh : %d\n", menorNum);

    printf("A media eh : %d\n", media / count);

    return (0);
}
