#include <stdio.h>

int main()
{
    int Matriz[20][20], Resultado[20][20];
    int LC = 0, i, j, TR;

    scanf("%d", &LC);

    for (i = 0; i < LC; i++)
    {
        for (j = 0; j < LC; j++)
        {
            scanf("%d", &Matriz[i][j]);
        }
    }

    for (i = 0; i < LC; i++)
    {
        for (j = 0; j < LC; j++)
        {
            TR += Matriz[i][j];
            i++;
        }
    }

    for (i = 0; i < LC; i++)
    {
        for (j = 0; j < LC; j++)
        {
            Resultado[i][j] = TR * Matriz[i][j] + Matriz[j][i];
        }
    }

    for (i = 0; i < LC; i++)
    {
        for (j = 0; j < LC; j++)
        {
            printf("%d ", Resultado[i][j]);
        }
        puts("");
    }

    return (0);
}