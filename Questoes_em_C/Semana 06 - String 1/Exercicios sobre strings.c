// Aluno : Matheus de Moura Rosa                                            Matricula : 202004768

//#1 1 - Declade uma string com capacidade de armazenar um nome com 25 caracteres.
#include <stdio.h>
#include <string.h>

int main()
{
    char Nome[25];

    return (0);
}

// 2 - Implemente em C as seguintes funçôes :
//#2 2.1 - Devolve o n° de caracteres alfabeticos em s.
#include <stdio.h>
#include <string.h>

int strcounta(char a[], char b[])
{
    int count = 0;

    int tamanho = strlen(a);

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (a[i] == b[j])
            {
                count++;
            }
        }
    }

    return (count);
}

int main()
{
    char Nome[25], Alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z'};

    gets(Nome);

    printf("%d ", strcounta(Nome, Alfabeto));

    return (0);
}

//#3 2.2 Tornar a string s vazia.
#include <stdio.h>
#include <string.h>

int init_str(char a[])
{
    a[0] = '\0';

    return (a);
}

int main()
{
    char Nome[20];

    gets(Nome);

    init_str(Nome);

    puts(Nome);

    return (0);
}

//#4 2.3 Devolve o último indice que encontrou c em s. Caso não exista devolva -1.
#include <stdio.h>
#include <string.h>

int ult_ind_chr(char a[], char b)
{
    int tamanho = strlen(a);

    int pos = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (b == a[i])
        {
            pos = i;
        }
        else
        {
            pos = -1;
        }
    }

    return (pos);
}

int main()
{
    char Nome[20];

    char x;

    int pos0 = 0;

    gets(Nome);

    scanf("%c", &x);

    pos0 = ult_ind_chr(Nome, x);

    printf("%d", pos0);

    return (0);
}

//#5 2.4 Coloca todos os caracteres de str em letra minusculas
#include <stdio.h>
#include <string.h>

int main()
{

    char Nome[25];

    gets(Nome);

    puts(strlwr(Nome));

    return (0);
}

//#6 2.5 Coloca o caractere ch apenas nas primeiras n posiçôes da string s.
// Se n > strlen(s) então n toma o valor de strlen(s).
#include <stdio.h>
#include <string.h>

int main()
{
    int x = 0;

    char Nome[25], letra;

    gets(Nome);

    scanf("%c %d", &letra, &x);

    puts(strnset(Nome, letra, x));

    return (0);
}

//#7 2.6 Faz o mesmo que a função strcmp, mas realiza a comparação ignorando se os caracteres estão
// em maiusculas ou minúscula (ignore case).
#include <stdio.h>
#include <string.h>

int main()
{
    int x = 0;

    char Nome[25] = {0}, Nome2[25] = {0};

    gets(Nome);

    gets(Nome2);

    x = stricmp(Nome, Nome2);

    if (x > 0)
    {
        printf("As strings não são iguais");
    }
    else if (x == 0)
    {
        printf("As strings são iguais");
    }
    else
    {
        printf("As strings não são iguais");
    }

    return (0);
}

//#8 3 - Implemente as seguintes funções retirada de enunciados de exames.
// 3.1 Recebe uma string, retirando-lhe todos os caracteres que não se encontram repetidos.
#include <stdio.h>
#include <string.h>

char letraRepetida[50] = {0};

char repeticoes(char a[])
{
    int temp = strlen(a);

    int count = 0;

    for (int i = 0; i < temp; i++)
    {
        for (int j = 0; j < temp; j++)
        {
            if (a[i] == a[j] && i != j && a[i] != ' ')
            {
                letraRepetida[count] = a[i];
                count++;
                break;
            }
        }
    }

    return (letraRepetida);
}

int main()
{
    char Nome[50] = {0};

    gets(Nome);

    repeticoes(Nome);

    printf("%s", letraRepetida);

    return (0);
}

//#9 3.2 Devolve o n-ésimo caractere da string s.
#include <stdio.h>
#include <string.h>

char n_esimo(char a[], int b)
{
    return (a[b - 1]);
}

int main()
{
    int x = 0;

    char Nome[25] = {0};

    gets(Nome);

    scanf("%d", &x);

    printf("%c", n_esimo(Nome, x));

    return (0);
}

//#10 3.3 Recebe uma string e compacta num único caracetere qualquer conjunto de caracteres repetidos
// consecutivos
#include <stdio.h>
#include <string.h>

char NomeCompactado[50] = {0};

char strpack(char a[])
{
    int tam = strlen(a);
    int count = 0;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (a[i] == a[j])
            {
                NomeCompactado[count] = a[j];
                count++;
                break;
            }
        }
    }

    return (NomeCompactado);
}

int main()
{
    char Nome[50] = {0};

    gets(Nome);

    strpack(Nome);

    printf("%s", NomeCompactado);

    return (0);
}