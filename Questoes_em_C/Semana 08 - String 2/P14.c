#include <stdio.h>
#include <string.h>

char str_clean0(char a[], char b[])
{
    int Tam = strlen(a);
    int i, j;

    for (i = 0; i < Tam; i++)
    {
        if (a[i] == b)
        {
            for (j = i; j < Tam; j++)
            {
                a[j] = a[j + 1];
            }

            Tam--;
            i--;
        }
    }
    return (a);
}
char str_clean(char a[], char b[])
{
    int w, Tam = strlen(b);

    char A;

    for (w = 0; w < Tam; w++)
    {
        A = b[w];
        str_clean0(a, A);
    }

    return (a);
}
int main()
{
    char str[256]; // string original

    char clr[256]; // lista de caracteres indesejados

    scanf("%[^\n]", str);

    scanf("\n%[^\n]", clr);

    str_clean(str, clr);

    printf("%s\n", str);

    return (0);
}