/*
    Nome: ex.9.3.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 9, exerc�cio 3.
*/
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

int main(void) {

    char t[41]; //vari�vel texto.
    int numCaracteres = 0;
    int auxLen = 0;

    printf( "Sentenca: " );
    fgets( t, 41, stdin );

    t[strlen(t)-1] = '\0';

    auxLen = strlen(t);

    for( int i = 0; i <= strlen(t) - 3; i++ ) {
        if( i%2 == 0 ) {
            if( t[i] == ' ' ) {
                printf( "' ', ", t[i] );
            } else {
                printf( "%c, ", t[i] );
            }
        }
    }
    printf( "%c", t[auxLen-2] );

   return 0;

}//Fim da fun��o main.



