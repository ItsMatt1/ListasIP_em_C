// Professor com meus conhecimentos atuais de programação essa questão foi o maximo que consegui fazer.

#include <stdio.h>

int main()
{
    int vetorA[5], vetorDiferente[5] = {0}, a = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (vetorA[i] != vetorA[j])
            {
                vetorDiferente[a] = vetorA[i];
                a++;
            }
        }
    }

    printf("Numeros diferentes : \n");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetorDiferente[i]);
    }

    return (0);
}