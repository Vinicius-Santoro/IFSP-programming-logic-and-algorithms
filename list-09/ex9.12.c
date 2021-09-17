/*
    Nome: ex.9.12.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 12.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

int contarOcorrencias( const char *str, char c );

int main() {

    char c[2];
    char frase[41] = { " " };
    int a = 0;
    int b = 0;
    int c_ = 0;
    int d = 0;
    int e = 0;

    printf( "Frase: " );
    fgets(frase, 41, stdin);

    frase[strlen(frase)-1] = '\0';
/*
    while( 'a' <= 'z' ) {

        lowerToUper -= 32;

    }

    while( 'A' <= 'Z' ) {

        uperToLower += 32;

    }
*/
   a = contarOcorrencias(frase, 'A') + contarOcorrencias(frase, 'a');
   b = contarOcorrencias(frase, 'B') + contarOcorrencias(frase, 'b');
   c_= contarOcorrencias(frase, 'C') + contarOcorrencias(frase, 'c');
   d = contarOcorrencias(frase, 'D') + contarOcorrencias(frase, 'd');
   e = contarOcorrencias(frase, 'E') + contarOcorrencias(frase, 'e');

    printf( "A/a: %d\n", a );
    printf( "B/b: %d\n", b );
    printf( "C/c: %d\n", c_ );
    printf( "D/d: %d\n", d );
    printf( "E/e: %d\n", e );


}//Fim da função main.

int contarOcorrencias( const char *str, char c ) {

    int i = 0;
    int aux = 0;

    while( str[i] != '\0' ) {

        if( c == str[i] ) {

            aux++;
        }

        i++;
    }

    return aux;

}//Fim da função contarOcorrencias.

