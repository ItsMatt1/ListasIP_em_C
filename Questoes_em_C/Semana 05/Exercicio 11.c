#include <stdio.h>

int main()
{
    int vetorA[10], count, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);

        if (vetorA[i] < 0)
        {
            count++;
        }
        if (vetorA[i] >= 0)
        {
            soma += vetorA[i];
        }
    }

    printf("A soma dos numeros positivos sao : %d\n", soma);
    printf("A quantidade de numeros negativos eh : %d\n", count);

    return (0);
}