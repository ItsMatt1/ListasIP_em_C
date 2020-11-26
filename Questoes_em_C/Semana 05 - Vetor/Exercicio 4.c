#include <stdio.h>

int main()
{
    int VetorA[8];
    int X, Y, soma;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &VetorA[i]);
    }

    printf("Insira X e Y :\n");

    scanf("%d %d", &X, &Y);

    X = VetorA[X];
    Y = VetorA[Y];
    soma = X + Y;

    printf("Os valores do vetor sao : \n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", VetorA[i]);
    }

    printf("\nA Soma das posiçoes X e Y eh : %d\n", soma);

    return (0);
}