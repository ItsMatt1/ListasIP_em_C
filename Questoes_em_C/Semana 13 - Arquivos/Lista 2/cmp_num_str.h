#ifdef cmp_num_str
#define cmp_num_str

#include <stdio.h>
#include <string.h>
#include <math.h>

void comparacao(int N1, char N2[])
{
    char Numeros[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int C = 0;

    for (int j = strlen(N2); j >= 0; j--)
    {
        for (int i = 0; i < 10; i++)
        {
            if (N2[j] == Numeros[i])
            {
                C = C + (pow(10, (strlen(N2) - j - 1)) * i);
            }
        }
    }

    if (N1 == C)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

#endif