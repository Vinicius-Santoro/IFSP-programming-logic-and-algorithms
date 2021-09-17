/*
    Nome: ex.9.13.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 13.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>



int main() {

    int contA = 0;
    int contE = 0;
    int contI = 0;
    int contO = 0;
    int contU = 0;
    int k;
    char frase[40];

    printf("Frase: ");
    fgets(frase, 40, stdin);
    frase[strlen(frase) - 1] = '\0';

   k = strlen(frase);

    for ( int i = 0; i < k; i++ ) {
        if ( frase[i] == 'a' || frase[i] == 'A' ) {
            contA++;
        }
        if ( frase[i] == 'e' || frase[i] == 'E' ) {
            contE++;
        }
        if ( frase[i] == 'i' || frase[i] == 'I' ) {
            contI++;
        }
        if ( frase[i] == 'o' || frase[i] == 'O' ) {
           contO++;
        }
        if ( frase[i] == 'u' || frase[i] == 'U' ) {
            contU++;
        }
    }

    printf( "A/a: %d\n", contA );
    printf( "E/e: %d\n", contE );
    printf( "I/i: %d\n", contI );
    printf( "O/o: %d\n", contO );
    printf( "U/u: %d\n", contU );

}//Fim da função Main
