#include<stdio.h>

void soma(int A[][3], int B[][3], int C[][3], int linha, int coluna);

int main(void)
{
    int A[3][3];
    int B[3][3];
    int C[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            A[i][j] = (i+j) * (i+1);
            B[i][j] = (i+j) * (i+1);
        //    C[i][j] = A[i][j] + B[i][j];
        }
    }

    soma(A,B,C,3,3);

    printf("Imprimindo os valores da matriz A:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("Imprimindo os valores da matriz B:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("Imprimindo os valores da matriz C:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return (0);
}

void soma(int A[][3], int B[][3], int C[][3], int linha, int coluna)
{
    int l,c;
    for (l = 0; l < linha; l++)
    {
        for (c = 0; c < coluna; c++)
            C[l][c] = A[l][c] + B[l][c];
    }
}