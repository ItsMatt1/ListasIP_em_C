#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome[20];// = "Gilmar Ferreira Arantes";

    puts("Informme o seu nome: \n");

    //scanf("%[^\n]",nome);

    fgets(nome,20,stdin);

    int i = strlen(nome);

    puts(nome);

    printf("O tamanho do nome é %d\n",i);

    return(0);
}