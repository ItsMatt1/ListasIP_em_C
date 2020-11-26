#include <stdio.h>

int main()
{
    int Matriz[6][6] = {{0}, {0}};
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, Soma = 0, Maior_Valor = -10, j = 0, i = 0;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &Matriz[i][j]);
        }
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (i < 4 && j < 4)
            {
                a = Matriz[i][j];
                b = Matriz[i][j + 1];
                c = Matriz[i][j + 2];

                d = Matriz[i + 1][j + 1];

                e = Matriz[i + 2][j];
                f = Matriz[i + 2][j + 1];
                g = Matriz[i + 2][j + 2];

                Soma = a + b + c + d + e + f + g;

                if (Soma > Maior_Valor)
                {
                    Maior_Valor = Soma;
                }
            }
        }
    }

    printf("%d", Maior_Valor);

    return (0);
}