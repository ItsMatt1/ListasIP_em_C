/*
Programa exemplo para verificar se um caracter é minúsculo ou não.
*/
#include<stdio.h>
//tabela ASCII - https://pt.wikipedia.org/wiki/ASCII

int minusculo(char x);

int main(void)
{
    char x = 'x';

    int z = minusculo(x);
        
    //testa se é maiúsculo ou minúsculo
    if(z == 1)
            printf(" O caractere '%c' é minúsculo.\n",x);
        else
            printf(" O caractere '%c' é maiúsculo.\n",x);

}

int minusculo(char x)
{
    int resultado = 0;
    int y = (int) x;

    if(y >= 97 && y <= 122)
        resultado = 1;

    return resultado;
}