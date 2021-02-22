// Desculpa professor fiquei exausto nessa debuguei tanto e nao consegui.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Nome[100];
    int Telefone;
    char Aniversario[100];

} Agenda;

int Counter2 = 0;
int Counter = 1;

void Adicionar_Contato(Agenda *a)
{
    printf("Voce entrou para digitar um novo contato!\n");

    a = (Agenda *)realloc(a, Counter * sizeof(Agenda));

    for (int i = 0; i < 1; i++)
    {
        printf("Insira o nome: ");
        scanf(" %[^\n]s", a[Counter2].Nome);
        printf("Insira o telefone: ");
        scanf("%d", &a[Counter2].Telefone);
        printf("Insira a data: ");
        scanf(" %[^\n]s", a[Counter2].Aniversario);
    }

    printf("Contato adicionado!\n");
    Counter++;
    Counter2++;

    return (0);
}

int main()
{
    FILE *Arq;
    Agenda *Contatos;
    int Comando = 0;

    Contatos = (Agenda *)malloc(5 * sizeof(Agenda));

    if (!(Arq = fopen("contatos.dat", "w+")))
    {
        printf("Erro! Impossivel escrever contatos.dat");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o nome: ");
        scanf(" %[^\n]s", Contatos[Counter2].Nome);
        printf("Insira o telefone: ");
        scanf("%d", &Contatos[Counter2].Telefone);
        printf("Insira a data: ");
        scanf(" %[^\n]s", Contatos[Counter2].Aniversario);
        Counter2++;
    }

    printf("Insira um comando : '1', '2', '3', '4', '5' ou '6': \n");
    scanf("%d", &Comando);

    switch (Comando)
    {
    case 1:
        Adicionar_Contato(&Contatos);
        break;

    default:
        break;
    }

    for (int i = 0; i < Counter2; i++)
    {
        printf("%s", Contatos[i].Nome);
        printf("%d", Contatos[i].Telefone);
        printf("%s", Contatos[i].Aniversario);
    }

    return (0);
}
