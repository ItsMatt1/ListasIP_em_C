//https://cboard.cprogramming.com/c-programming/177068-how-save-array-file.html

#include <stdio.h>
#include <string.h>

int main() {

    int number[5];

    //preenchendo o vetor:
    printf("Informe um valor para o vetor.\n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&number[i]);
    }

    FILE *file;

    if((file = fopen("file_number.txt","w"))==NULL) {
        printf("Erro ao abrir/criar o arquivo\n");
        exit(1);
    }else{
        for(int i = 0; i < 5; i++){
            fprintf(file, "%d ", number[i]);
        }
    }

    fclose(file);

    return 0;
}