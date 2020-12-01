#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *Arq;
    char c[1000];

    Arq = fopen("arq.txt", "w");

    fgets(c, 1000, stdin);

    for (int i = 0; i < 1000; i++)
    {
        i = 0;
        if (c[i] == '0')
        {
            fclose(Arq);
            return (0);
        }
        else if (c[i] != '0')
        {
            fprintf(Arq, "%s", c);
        }
        fgets(c, 1000, stdin);
    }

    fclose(Arq);

    return (0);
}