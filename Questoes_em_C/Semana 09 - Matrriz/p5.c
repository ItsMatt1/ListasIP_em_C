#include <stdio.h>

int main()
{
    int Matriz[50][50];

    int L = 0, C = 0, i, j, Counter = 0, Counter0 = 0, p, w;

    scanf("%d %d", &L, &C);

    for (i = 0; i < L; i++)
    {
        if (Counter0 % 2 == 0)
        {
            for (j = 0; j < C; j++)
            {
                if (Counter % 2 == 0)
                {
                    Matriz[i][j] = 1;
                    Counter++;
                }

                else
                {
                    Matriz[i][j] = 0;
                    Counter++;
                }
            }
            Counter0++;
            Counter = 0;
        }

        else
        {
            for (j = 0; j < C; j++)
            {
                if (Counter % 2 == 0)
                {
                    Matriz[i][j] = 0;
                    Counter++;
                }

                else
                {
                    Matriz[i][j] = 1;
                    Counter++;
                }
            }
            Counter0++;
            Counter = 0;
        }
    }

    for (p = 0; p < L; p++)
    {
        for (w = 0; w < C; w++)
        {
            printf("%d", Matriz[p][w]);
        }

        puts("");
    }

    return (0);
}