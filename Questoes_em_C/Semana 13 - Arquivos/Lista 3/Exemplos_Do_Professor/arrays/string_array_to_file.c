//https://cboard.cprogramming.com/c-programming/177068-how-save-array-file.html

#include <stdio.h>
#include <string.h>

int main(void) {

    char *nomes[5][20];

    printf("Informe cinco nomes de jogadores:\n");
    //getchar();
    for (int i = 0; i < 5; i++){
       scanf("%[^\n]s",nomes[i]);
       getchar();
    }

    FILE *file;

    if((file = fopen("jogadores.txt","w"))==NULL) {
        printf("Erro ao abrir/criar o arquivo\n");
        exit(1);
    }else{
        for(int i = 0; i < 5; i++){
            fprintf(file, "%s\n", nomes[i]);
        } 
    }

    fclose(file);

    return 0;
}