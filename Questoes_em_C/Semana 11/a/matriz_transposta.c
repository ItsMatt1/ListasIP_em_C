#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 3
#define coluna 3

void transposta(int a[linha][coluna], int b[linha][coluna], int nLinhas, int mColunas);

int main(void)
{
    int matriz[linha][coluna];
    int matrizT[linha][coluna];

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

    transposta(matriz,matrizT,linha,coluna);
    

    return(0);
}

void transposta(int a[linha][coluna], int b[linha][coluna], int nLinhas, int mColunas){
    for(int i = 0; i < nLinhas; i++)
    {
        for(int j = 0; j < mColunas; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Imprimindo os valores da matriz transposta:\n");
    for(int i = 0; i < nLinhas; i++)
    {
        for(int j = 0; j < mColunas; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}