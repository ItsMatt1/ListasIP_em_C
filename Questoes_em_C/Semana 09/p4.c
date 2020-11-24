#include <stdio.h>

int main()
{
    int Matriz[100][100];

    int L, C, Counter = 0;
    int i, j, p, w;

scan_L:
    scanf("%d", &L);

    if (L < 1 || L > 10)
    {
        goto scan_L;
    }

scan_C:
    scanf("%d", &C);

    if (C < 1 || C > 10)
    {
        goto scan_C;
    }

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf("%d", &Matriz[i][j]);
        }
    }

    for (p = 0; p < L; p++)
    {
        printf("linha %d: ", p + 1);

        for (w = 0; w < C; w++)
        {
            if (w != C - 1)
            {
                printf("%d,", Matriz[p][w]);
            }
            else
            {
                printf("%d", Matriz[p][w]);
            }
        }

        puts("");
    }

    return (0);
}