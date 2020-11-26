#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 3
#define coluna 3

int main(void)
{
    int matriz[linha][coluna];

    int t = (linha*coluna);
    int vetor[t];

    srand(time(NULL));

    //preenchendo a matriz.
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            matriz[i][j] = (rand () % 100);
        }
    }

    //"armazenando os elementos da matriz no vetor.
    int x=0;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++)
        {
            vetor[x] = matriz[i][j];
            ++x;
        }
    }
    

    printf("imprimindo os dados da matriz.\n");
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }  

    printf("Imprimindo os valores do vetor:\n");
    for(int i = 0; i < t; i++)
        printf("%d ", vetor[i]); 
    printf("\n");
    return(0);
}

