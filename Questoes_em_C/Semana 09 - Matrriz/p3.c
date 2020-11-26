#include <stdio.h>

int main()
{
    int Matriz[100][100];

    int i, j, p, w, N = 0, Counter = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &Matriz[i][j]);
        }
    }

    w = N - 1;

    while (Counter != N)
    {
        printf("%d\n", Matriz[p][w]);
        p++;
        w--;
        Counter++;
    }

    return (0);
}