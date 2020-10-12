#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[10] = {0}, vetorImpar[10] = {0}, a = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);

        if (vetorA[i] < 0 || vetorA[i] > 50)
        {
            exit(0);
        }
        if (vetorA[i] % 2 != 0)
        {
            vetorImpar[a] = vetorA[i];
            a++;
        }
    }

    printf("Todos os valores sao : \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetorA[i]);
        i++;
        printf("%d ", vetorA[i]);
        printf("\n");
    }

    printf("Os valores impares sao : \n");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetorImpar[i]);
        i++;

        if (i != a)
        {
            printf("%d ", vetorImpar[i]);
            printf("\n");
        }
    }

    return (0);
}