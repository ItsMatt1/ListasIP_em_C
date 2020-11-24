/*
Programa exemplo para verificar se um caracter é vogal ou não.
*/
#include<stdio.h>

//tabela ASCII - https://pt.wikipedia.org/wiki/ASCII

int evogal(char x);


int main(void)
{
    char x = 'E';

    int y = evogal(x);

    //testa se é vogal ou não
    if(y == 1)
        printf("O caracter '%c' é uma vogal.\n",x);
    else
        printf("O Caracter '%c' é uma consoante.\n",x);
    

}

int evogal(char x)
{
    int resultado = 0;
    char vogais[] = {'A','E','I','O','U','a','e','i','o','u'};
    for(int i = 0; i < 10; i++)
    {
        if(x == vogais[i])
            resultado = 1;
    }
    return resultado;
}

