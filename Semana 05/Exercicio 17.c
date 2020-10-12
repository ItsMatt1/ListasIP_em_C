#include <stdio.h>

int main()
{
    int vetorA[10], x, counter = 0, vetorMultiplos[10] = {0}, a = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    printf("Leia um numero : ");

    scanf("%d", &x);

    for (int i = 0; i < 10; i++)
    {
        if (vetorA[i] % x == 0)
        {
            vetorMultiplos[counter] = vetorA[i];
            counter++;
        }
    }

    printf("Existem %d numeros multiplos", counter);

    printf("Os multiplos de %d sao : \n", x);

    for (int i = 0; i < counter; i++)
    {
        printf("%d ", vetorMultiplos[i]);
    }

    return (0);
}