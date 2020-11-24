#include<stdio.h>
#include<string.h>
#include<ctype.h>

int strcountd(char *s);

int main(void)
{
    
    char sobrenome[50] = "Ferreira";

    int i = strcountd(sobrenome);

    printf("No meu sobrenome existem %d digitos.\n",i);
        
    return(0);
}

int strcountd(char *s)
{
    int i, cont;
    for(i = cont = 0; s[i] != '\0'; i++){
        if(isdigit(s[i]))
            cont++;
    }
    return cont;
}