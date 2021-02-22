// Programa em C para gravar os dados de uma struct em um arquivo binário. 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
  
// struct para ser escrita no arquivo e depois lida. 
struct pessoa  
{ 
    int id; 
    char primeiro_nome[20]; 
    char ultimo_nome[20]; 
}; 
  
int main () 
{ 
    FILE *outfile; 
      
    // abre o arquivo para escrita 
    outfile = fopen ("pessoa.dat", "w"); 
    if (outfile == NULL) 
    { 
        fprintf(stderr, "\nErro ao abrir o arquivo.\n"); 
        exit(1); 
    } 
  
    struct pessoa p1 = {1, "Carlos", "Santos"}; 
    struct pessoa p2 = {2, "Camila", "Oliveira"}; 
      
    // Escreve os dados da struct no arquivo 
    fwrite(&p1, sizeof(struct pessoa), 1, outfile); 
    fwrite(&p2, sizeof(struct pessoa), 1, outfile); 
      
    if(fwrite != 0)  
        printf("conteúdo escrito corretamente no arquivo!\n"); 
    else 
        printf("erro ao escrever no arquivo!\n"); 
  
    // fecha o arquivo 
    fclose (outfile); 
  
    return 0; 
} 