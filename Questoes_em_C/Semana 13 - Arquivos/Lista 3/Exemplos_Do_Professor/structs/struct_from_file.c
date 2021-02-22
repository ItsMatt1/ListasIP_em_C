// C program for reading  
// struct from a file 
#include <stdio.h> 
#include <stdlib.h> 
  
// struct pessoa com 3 campos
struct pessoa  
{ 
    int id; 
    char primeiro_nome[20]; 
    char ultimo_nome[20]; 
}; 
  
 
int main () 
{ 
    FILE *infile; 
    struct pessoa p1; 
      
    // Abre o arquivo pessoa.dat para leitura 
    infile = fopen ("pessoa.dat", "r"); 
    if (infile == NULL) 
    { 
        fprintf(stderr, "\nErro ao abrir o arquivo.\n"); 
        exit (1); 
    } 
      
    // Ler o contéudo até o final do arquivo 
    while(fread(&p1, sizeof(struct pessoa), 1, infile)) 
        printf ("id = %d nome = %s %s\n", p1.id, p1.primeiro_nome, p1.ultimo_nome); 
  
    // Fecha o arquivo
    fclose (infile); 
  
    return 0; 
} 