#include <stdio.h>

int main()
{
    int vetorA[10], counter;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    printf("Os valores pares sao : \n");

    for (int i = 0; i < 10; i++)
    {
        if (vetorA[i] % 2 == 0)
        {
            printf("%d ", vetorA[i]);
            counter++;
        }
    }

    printf("\nO numero de numeros pares eh : %d\n", counter);
}