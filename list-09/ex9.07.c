/*
    Nome: ex.9.7.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 7.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

int main() {

    char par1[5][41];
    char par2[5][41];
    int result;

    for ( int i = 0; i < 5; i++ ) {
        printf("Par %d, palavra 1:", i + 1);
        fgets(par1[i], 41, stdin);
        par1[i][strlen(par1[i]) - 1] = '\0';
        printf("Par %d, palavra 2:", i + 1);
        fgets(par2[i], 41, stdin);
        par2[i][strlen(par2[i]) - 1] = '\0';
    }

    for ( int i = 0; i < 5; i++ ) {
        result = strcmp(par1[i], par2[i]);
        printf("%s - %s: ", par1[i], par2[i]);
        if (result < 0) {
            printf("ORDEM CRESCENTE\n");
        } else if (result > 0) {
            printf("ORDEM DECRESCENTE\n");
        } else {
            printf("IGUAIS\n");
        }
    }

    return 0;

}//Fim da main.



