#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome[50];
    char sobrenome[50];

    strcpy(nome,"Gilmar");
    strcpy(sobrenome,"Ferreira");

    printf("%s\n",nome);
    printf("%s\n",sobrenome);
    
    return(0);
}