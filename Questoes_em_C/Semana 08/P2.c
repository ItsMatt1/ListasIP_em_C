#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N = 0, Soma_Total = 0;
    char String1[100] = {0};
    int String2[1000] = {0};
    int n, i, j, Tam;

    scanf("%d", &N);

    if (N < 1 || N > 1000)
    {
        exit(0);
    }

    for (n = 0; n < N; n++)
    {
        scanf("%s", String1);

        Soma_Total = 0;
        Tam = strlen(String1);

        for (i = 0; i < Tam; i++)
        {

            switch (String1[i])
            {
            case ('1'):
                Soma_Total += 2;
                break;
            case ('2'):
                Soma_Total += 5;
                break;
            case ('3'):
                Soma_Total += 5;
                break;
            case ('4'):
                Soma_Total += 4;
                break;
            case ('5'):
                Soma_Total += 5;
                break;
            case ('6'):
                Soma_Total += 6;
                break;
            case ('7'):
                Soma_Total += 3;
                break;
            case ('8'):
                Soma_Total += 7;
                break;
            case ('9'):
                Soma_Total += 6;
                break;
            case ('0'):
                Soma_Total += 6;
                break;
            }

            String2[n] = Soma_Total;
        }
    }

    for (j = 0; j < N; j++)
    {
        printf("%d leds\n", String2[j]);
    }

    return (0);
}