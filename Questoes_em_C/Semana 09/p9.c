#include <stdio.h>

int main()
{
    int Matriz[100][100] = {{0}, {0}};
    int i, j, Linhas = 0, Colunas = 0, Counter = 0, Counter0 = 1;

    scanf("%d %d", &Linhas, &Colunas);

    for (i = 0; i < Linhas; i++)
    {
        if (Colunas % 2 != 0)
        {
            for (j = 0; j < Colunas; j++)
            {
                if (Counter % 2 == 0)
                {
                    Matriz[i][j] = 0;
                }

                else
                {
                    Matriz[i][j] = Counter0;
                    Counter0++;
                }

                Counter++;
            }
        }
        else
        {
            for (j = 0; j < Colunas; j++)
            {
                if (Counter % 2 == 0)
                {
                    Matriz[i][j] = 0;
                }

                else
                {
                    Matriz[i][j] = Counter0;
                    Counter0++;
                }

                Counter++;
            }
            Counter--;
        }
    }

    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Colunas; j++)
        {
            printf("%d ", Matriz[i][j]);
        }
        puts("");
    }

    return (0);
}

struct teste
{
    char teste1[30];
} teste1, teste2, teste3;
