#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome[50] = "Gilmar ";
    char sobrenome[50] = "Ferreira";

    strcat(nome,sobrenome);
    //strcpy(sobrenome,"Ferreira");

    printf("%s\n",nome);
    //printf("%s\n",sobrenome);
    
    return(0);
}