#include <stdio.h>
#include <limits.h>

int main()
{
    int vetorA[10], maiorNum = INT_MIN, pos;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);

        if (vetorA[i] > maiorNum)
        {
            maiorNum = vetorA[i];
            pos = i;
        }
    }

    printf("Os valores do vetores são : \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorA[i]);
    }

    printf("\nO maior valore eh : %d, e ele se encontra na posicao : %d", maiorNum, pos);

    return (0);
}