#include <stdio.h>
#include <string.h>

typedef struct
{
    char Titulo[1000];
    char Autor[1000];
    double Preco;

} Biblioteca;

int main()
{
    int N = 0, T = 0;

    Biblioteca Livro[10];

    printf("Insira quantos livros quer cadastrar: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        fflush(stdin);
        printf("Insira o titulo do livro: ");
        scanf("%[^\n]s", Livro[i].Titulo);
        getchar();

        printf("Insira o autor do livro: ");
        scanf("%[^\n]s", Livro[i].Autor);
        getchar();

        printf("Insira o preco do livro: ");
        scanf("%lf", &Livro[i].Preco);
    }

    for (int i = 0; i < N; i++)
    {
        printf("O livro %d tem os seguintes dados:", i + 1);
        printf("\nTitulo : %s", Livro[i].Titulo);
        printf("\nAutor : %s", Livro[i].Autor);
        printf("\nPreco : %.2lf\n", Livro[i].Preco);
    }

    return (0);
}