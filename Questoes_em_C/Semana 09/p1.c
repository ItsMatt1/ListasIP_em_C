#include <stdio.h>

int main()
{
    double Matriz[2][2], Determinante = 0, A = 0, B = 0, C = 0, D = 0;
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%lf", &Matriz[i][j]);
        }
    }

    A = Matriz[0][0];
    B = Matriz[0][1];
    C = Matriz[1][0];
    D = Matriz[1][1];

    Determinante = ((A * D) - (B * C));

    printf("%0.2lf\n", Determinante);

    return (0);
}