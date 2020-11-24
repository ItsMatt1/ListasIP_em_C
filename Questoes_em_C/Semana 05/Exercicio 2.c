#include <stdio.h>

int main()
{
    int A[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Os valores do vetor A é %d\n", A[i]);
    }

    return (0);
}