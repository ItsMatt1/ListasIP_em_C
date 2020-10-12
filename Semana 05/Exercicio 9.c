#include <stdio.h>

int main()
{
    int vetorPar[6] = {0};
    int temp[6];
    int counter = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &temp[i]);

        if (temp[i] % 2 == 0)
        {
            vetorPar[counter] = temp[i];
            counter++;
        }
    }

    printf("Os valores pares sao : \n");

    for (int i = 0; i < counter; i++)
    {
        printf("%d ", vetorPar[i]);
    }
}