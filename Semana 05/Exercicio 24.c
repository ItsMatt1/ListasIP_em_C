#include <stdio.h>

int main()
{
    int vetorV[10] = {0}, vetorV1[10] = {0}, vetorV2[10] = {0};
    int a = 0, counter = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorV[i]);

        if (vetorV[i] % 2 != 0)
        {
            vetorV1[a] = vetorV[i];
            a++;
        }
        else
        {
            vetorV2[counter] = vetorV[i];
            counter++;
        }
    }

    printf("Os impares do vetor 1 eh : \n");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetorV1[i]);
    }

    printf("\nOs impares do vetor 2 eh : \n");

    for (int i = 0; i < counter; i++)
    {
        printf("%d ", vetorV2[i]);
    }

    return (0);
}