#include<stdio.h>
#define linha 3
#define coluna 3

int main(void)
{
    int matriz[linha][coluna];

    //preenchendo a matriz
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            matriz[i][j] = (i+j) * 3;
        }
    }

    printf("imprimindo os valores da matriz:\n");
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("imprimindo os valores da diagonal secundária: ");
    int m = (linha - 1);
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            if(i + j == m)
                printf("%d ",matriz[i][j]);
        }
    }

    printf("\nimprimindo os valores da diagonal secundária(2): ");
    for(int i = 0; i < linha; i++)
    {
        for(int j = coluna-1; j >= 0; j--)
        {
            printf("%d ",matriz[i][j]);
            i++;
        }
    }


    return(0);
}