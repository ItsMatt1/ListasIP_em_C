#include <stdio.h>

int main()
{
    int Matriz[100][100] = {{0}, {0}};
    int i, j, Linhas = 0, Colunas = 0, LarguraDaBorda = 0, ValorDaBorda = 0;

    scanf("%d %d %d %d", &Linhas, &Colunas, &LarguraDaBorda, &ValorDaBorda);

    printf("P2\n%d %d\n255\n", Colunas, Linhas);

    for (i = 0; i < Linhas; i++)
    {
        for (j = 0; j < Colunas; j++)
        {
            if ((i < LarguraDaBorda || i >= Linhas - LarguraDaBorda) || (j < LarguraDaBorda || j >= Colunas - LarguraDaBorda))
            {
                Matriz[i][j] = ValorDaBorda;
            }
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