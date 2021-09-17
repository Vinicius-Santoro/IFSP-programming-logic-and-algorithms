/*
    Nome: ex.7.11.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 7, exercício 11.
*/
    #include<stdio.h>
    #include<stdlib.h>

int numeroCorreto( int n );     //  Verifica se um número, em conjunto com seu dígito, está correto.
int obtemDigito( int n );       //  Separa o dígito verificador (a unidade) do número.
int obtemNumero( int n );       //  Separa o número do dígito verificador.
int lePositivo( void );         //  Verifica se o valor digitado pelo usuário é inteiro e positivo.
int calculaDigito ( int n );    //  Calcula o dígito verificador de um número.

int main() {

    int num;

    printf( "Numero: " );

    num = lePositivo( );

    printf( "Numero completo: %d\n", num );
    printf( "Numero: %d\n", obtemNumero( num ) );
    printf( "Digito: %d\n", obtemDigito( num ) );
    printf( "Digito calculado: %d\n", calculaDigito( num ) );

    if ( numeroCorreto( num ) == 1 ) {

        printf( "O numero fornecido esta correto!\n" );

    } else {

        printf( "O numero fornecido esta incorreto!\n" );
    }

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

int numeroCorreto( int n ) {

    if ( obtemDigito( n ) == calculaDigito( n ) ) {

        return 1;

    } else {

        return 0;
    }


}//Fim da função numeroCorreto.

int obtemDigito( int n ) {

    int m = 0;
    int c = 0;
    int d = 0;
    int u = 0;

    m = n / 1000;
        n %= 1000;

    c = n / 100;
        n %= 100;

    d = n / 10;
        n %= 10;

    u = n;

    return u;

}//Fim da função obtemDigito.

int obtemNumero( int n ) {

    int m = 0;
    int c = 0;
    int d = 0;
    int u = 0;

    m = n / 1000;
        n %= 1000;

    c = n / 100;
        n %= 100;

    d = n / 10;
        n %= 10;

    u = n;

    return ( m * 100 ) + ( c * 10 ) +  d;

}//Fim da função obtemNumero.

int calculaDigito ( int n ) {

    n = obtemNumero( n );
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



