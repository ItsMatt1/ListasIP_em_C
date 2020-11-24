#include <stdio.h>

int main()
{
    int Matriz[10][10];

    int i, j, p, w, N = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &Matriz[i][j]);
        }
    }

    for (p = 0; p < N; p++)
    {
        for (w = 0; w < N; w++)
        {
            printf("%d\n", Matriz[p][w]);
            p++;
        }
    }

    return (0);
}