#include<stdio.h>
#include<string.h>

int strcountc(char *s, char ch);

int main(void)
{
    
    char sobrenome[50] = "Ferreira";

    int i = strcountc(sobrenome,'r');

    printf("O caractere 'r' aparece %d vezes no meu sobrenome.\n",i);
        
    return(0);
}

int strcountc(char *s, char ch)
{
    int i, cont;
    for(i = cont = 0; s[i] != '\0'; i++){
        if(s[i] == ch)
            cont++;
    }
    return cont;
}