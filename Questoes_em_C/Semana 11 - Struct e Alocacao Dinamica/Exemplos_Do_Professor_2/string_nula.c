#include<stdio.h>
#include<strings.h>

int isnull(char *s);

int main(void)
{
    char nome[50] = "";

    printf("%d\n",isnull(nome));
}

int isnull(char *s)
{
    return(s[0] == '\0');
}