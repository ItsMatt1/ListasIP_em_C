#include <stdio.h>

int main()
{
    int vetorA[6] = {0}, vetorPar[6], vetorImpar[6], a = 0, counter = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vetorA[i]);

        if (vetorA[i] % 2 == 0)
        {
            vetorPar[a] = vetorA[i];
            a++;
        }
        else
        {
            vetorImpar[counter] = vetorA[i];
            counter++;
        }
    }

    printf("Os numeros pares digitados sao : %d, sendo eles :\n", a);

    for (int i = 0; i < a; i++)
    {
        printf("%d", vetorPar[i]);
    }

    printf("\nOs numeros impares digitados sao : %d, sendo eles :\n", counter);

    for (int i = 0; i < counter; i++)
    {
        printf("%d", vetorImpar[i]);
    }

    return (0);
}