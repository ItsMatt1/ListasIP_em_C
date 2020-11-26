#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N = 0, n, i, p;
    char String1[4] = {0};
    int Vetor_Resposta[10];

    scanf("%d ", &N);

    if (N < 1 || N >= 1000)
    {
        exit(0);
    }

    for (n = 0; n < N; n++)
    {
        gets(String1);

        for (i = 0; i < strlen(String1); i++)
        {
            if (String1[0] == 'o' && String1[1] == 'n' && String1[2] == 'e' ||
                ((String1[0] >= 97 && String1[0] <= 122) && String1[1] == 'n' && String1[2] == 'e') ||
                (String1[0] == 'o' && (String1[1] >= 97 && String1[0] <= 122) && String1[2] == 'e') ||
                (String1[0] == 'o' && String1[1] == 'n' && (String1[2] >= 97 && String1[0] <= 122)))
            {
                Vetor_Resposta[n] = 1;
            }

            else if (String1[0] == 't' && String1[1] == 'w' && String1[2] == 'o' ||
                     ((String1[0] >= 97 && String1[0] <= 122) && String1[1] == 'w' && String1[2] == 'o') ||
                     (String1[0] == 't' && (String1[1] >= 97 && String1[0] <= 122) && String1[2] == 'o') ||
                     (String1[0] == 't' && String1[1] == 'w' && (String1[2] >= 97 && String1[2] <= 122)))
            {
                Vetor_Resposta[n] = 2;
            }

            else
            {
                Vetor_Resposta[n] = 3;
            }
        }
    }

    for (p = 0; p < N; p++)
    {
        printf("%d\n", Vetor_Resposta[p]);
    }

    return (0);
}