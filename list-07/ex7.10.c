/*
    Nome: ex.7.10.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 10.
*/
    #include<stdio.h>
    #include<stdlib.h>

int lePositivo( void );
int calculaDigito ( int n );

int main() {

    int num;

    printf( "Numero: " );

    num = lePositivo( );

    printf( "Digito verificador de %d: %d\n\n", num, calculaDigito( num ) );


}//Fim da funcao main.

int lePositivo( void ) {

    int m;

    do {

        scanf( "%d", &m );

        if( m <= 0 ) {
            printf( "Entre com um valor positivo:\n" );
        }

    } while( m <= 0);

    return m;

}//Fim da funcao lePositivo.

int calculaDigito ( int n ) {

    int m = 0;
    int c = 0;
    int d = 0;
    int u = 0;
    int restoDiv = 0;
    int restoObtido = 0;
    int produtoObtido = 0;

    m = n / 1000;
        n %= 1000;

    c = n / 100;
        n %= 100;

    d = n / 10;
        n %= 10;

    u = n;


    produtoObtido = (  ( u * 2 ) + ( d * 3 ) + ( c * 4 ) + ( m * 5 ) );

    restoDiv = produtoObtido % 11;

    restoObtido =  11 - restoDiv;

    if ( restoObtido == 10 || restoObtido == 11 ) {

        return 0;

    } else {

        return restoObtido;

    }

}//Fim da funcao calculaDigito.

