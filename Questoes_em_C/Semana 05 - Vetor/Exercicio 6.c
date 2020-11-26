#include <stdio.h>
#include <limits.h>

int main()
{
    int vetorA[10], maiorNum = INT_MIN, menorNum = INT_MAX;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);

        if (vetorA[i] > maiorNum)
        {
            maiorNum = vetorA[i];
        }
        if (vetorA[i] < menorNum)
        {
            menorNum = vetorA[i];
        }
    }

    printf("O maior eh : %d\n", maiorNum);
    printf("A menor eh : %d", menorNum);

    return (0);
}