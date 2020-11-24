#include <stdio.h>
#include <conio.h>
int main()
{
    /*Declaração de variáveis*/
    int a = 0, i, j, w, flag;
    int vetor[10], iguais[10]; /* a=0 então esse vetor não teria nenhuma posição , erro ! */
    /*Entrada*/
    for (i = 0; i < 10; i++)
    {
        printf("Entre com o elemento[ %d ] : ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            /*if(j==i){
                continue;  /* não precisa desse trecho */
            /*}
            else */
            flag = 0;
            if (vetor[i] == vetor[j] && i != j)
            {
                for (w = 0; w < 10; w++)
                {
                    if (iguais[w] == vetor[j]) /* se o numero já estiver nesse vetor de iguais */
                        flag = 1;
                }
                if (flag == 0)
                {
                    iguais[a] = vetor[i]; /* para escrever o numero apenas uma vez */
                    a++;
                }
                /*break;    nem desse break */
            }
        }
    }
    for (i = 0; i < a; i++)
    {
        printf("%d ", iguais[i]);
    }
    getch();
    return 0;
}