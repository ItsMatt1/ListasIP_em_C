// 2.2 Tornar a string s vazia.
#include <stdio.h>
#include <string.h>

int init_str(char a[])
{
    a[0] = '\0';

    return (a);
}

int main()
{
    char Nome[20];

    gets(Nome);

    init_str(Nome);

    puts(Nome);

    return (0);
}