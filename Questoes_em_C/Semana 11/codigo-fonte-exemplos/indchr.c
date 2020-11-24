#include<stdio.h>
#include<string.h>
#include<ctype.h>

int indchr(char *s, char ch);

int main(void)
{
    
    char sobrenome[50] = "Ferreira";

    int i = indchr(sobrenome,'r');

    printf("A primeira ocorrência de 'r', no meu sobrenome ocorre na posição %d.\n",i);
        
    return(0);
}

int indchr(char *s, char ch)
{
    int i, cont;
    for(i = cont = 0; s[i] != '\0'; i++){
        if(s[i] == ch)
            cont++;
    }
    return cont;
}