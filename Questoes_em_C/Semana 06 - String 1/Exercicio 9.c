//#9 3.2 Devolve o n-ésimo caractere da string s.
#include <stdio.h>
#include <string.h>

char n_esimo(char a[], int b)
{
    return (a[b - 1]);
}

int main()
{
    int x = 0;

    char Nome[25] = {0};

    gets(Nome);

    scanf("%d", &x);

    printf("%c", n_esimo(Nome, x));

    return (0);
}