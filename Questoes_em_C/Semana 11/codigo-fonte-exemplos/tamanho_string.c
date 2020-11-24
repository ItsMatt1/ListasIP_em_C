#include<stdio.h>
#include<string.h>

int main(void)
{
    //define uma String de tamanho 30. Se informar algum conteúdo superior a 30,
    //só serão armazenados os 30 primeiros caracteres 
    //Se atribuir um valor menor que 30. Será utilizado somente o espaço correspondente ao tamanho da String
    char nome[30] = "Universidade Federal de Goiás - UFG";

    char palavra[10];

    //palavra = "Terra";// -- alinguagem não permite esta forma de atribuição de valor a uma string.
    //deve ser feito da seguinte forma:

    strcpy(palavra, "Terra");
    

    //imprimir o tamanho e o conteúdo da variável nome
    printf("%d\n",strlen(nome));
    printf("%s\n",nome);

    //imprimir o tamanho e o conteúdo da variável palavra
    printf("%d\n",strlen(palavra));
    printf("%s\n",palavra);

}