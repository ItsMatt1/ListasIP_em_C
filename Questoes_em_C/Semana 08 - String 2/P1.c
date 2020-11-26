#include <stdio.h>
#include <string.h>

int main()
{
    char String1[50] = {0};
    char String2[50] = {0};
    char String3[100] = {0};
    char String4[10000] = {0};
    char *String5;
    char *Token = " - ";
    int N = 0, Counter = 0, Auxiliar1 = 0, Auxiliar2 = 0, Auxiliar3 = 0, n, c;

    scanf("%d", &N);

    for (n = 0; n < N; n++)
    {
        Counter = Auxiliar1 = Auxiliar2 = 0;
        char String3[100] = {0};

        scanf("%s[^\n]", String1);
        scanf("%s[^\n]", String2);

        for (Counter = 0; Counter < (strlen(String1) + strlen(String2)); Counter++)
        {
            if (Counter % 2 == 0)
            {
                if (strlen(String1) > strlen(String2) && Counter > 0 && String3[Counter - 1] == NULL)
                {
                    Counter--;
                }

                String3[Counter] = String1[Auxiliar1];
                Auxiliar1++;
            }
            else
            {
                if (strlen(String1) < strlen(String2) && Counter > 0 && String3[Counter - 1] == NULL)
                {
                    Counter--;
                }

                String3[Counter] = String2[Auxiliar2];
                Auxiliar2++;
            }
        }

        for (c = 0; c < strlen(String3); c++, Auxiliar3++)
        {
            String4[Auxiliar3] = String3[c];
        }

        if (n < (N - 1))
        {
            strcat(String4, " ");
            Auxiliar3 += 1;
        }
    }

    String5 = strtok(String4, " ");

    while (String5)
    {
        printf("\n%s", String5);
        String5 = strtok(NULL, " ;");
    }

    return 0;
}