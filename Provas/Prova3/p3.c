#include <stdio.h>
#include <string.h>

void remove_vogais(char *str, int *vogais)
{
    char Vogais[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int Tam = strlen(str), Counter = 0, i, j;
    int W = 0;

    for (i = 0; i < Tam; i++)
    {
        W = 0;
        for (j = 0; j < 10; j++)
        {
            if (str[i] == Vogais[j])
            {
                vogais[W]++;

                for (j = i; j < Tam; j++)
                {
                    str[j] = str[j + 1];
                }

                Tam--;
                i--;
            }

            if (j % 2 != 0)
            {
                W++;
            }
        }
    }

    printf("%s\n", str);
    printf("a: %d\n", vogais[0]);
    printf("e: %d\n", vogais[1]);
    printf("i: %d\n", vogais[2]);
    printf("o: %d\n", vogais[3]);
    printf("u: %d\n", vogais[4]);
}

int main()
{
    char String[256];
    int Vogais1[5] = {0};

    scanf("%[^\n]s", String);

    remove_vogais(&String, &Vogais1);

    return (0);
}