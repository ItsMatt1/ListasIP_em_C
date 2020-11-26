#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 3
#define coluna 3

int main(void)
{
    int matriz[linha][coluna];

    srand(time(NULL));

    //preenchendo a matriz
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            matriz[i][j] = (rand () % 100);
        }
    }

    //imprimindo os dados da matriz
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }   

    return(0);
}

