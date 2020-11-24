#include <stdio.h>

int main()
{
    float Matriz[2][2], Matriz2[2][2];
    int i = 0, j = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &Matriz[i][j]);
        }
    }

    Matriz2[0][0] = (Matriz[0][0] * Matriz[0][0]) + (Matriz[0][1] * Matriz[1][0]);
    Matriz2[0][1] = (Matriz[0][0] * Matriz[0][1]) + (Matriz[0][1] * Matriz[1][1]);
    Matriz2[1][0] = (Matriz[1][0] * Matriz[0][0]) + (Matriz[1][1] * Matriz[0][1]);
    Matriz2[1][1] = (Matriz[1][0] * Matriz[0][1]) + (Matriz[1][1] * Matriz[1][1]);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%0.3f ", Matriz2[i][j]);
        }
        puts("");
    }

    return (0);
}