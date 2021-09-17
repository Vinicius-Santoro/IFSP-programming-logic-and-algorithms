/*
    Nome: ex.10.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 1.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int compararData( const Data *d1, const Data *d2 );
void imprimirData( const Data *data );

int main() {

    Data d1;
    Data d2;
    int aux = 0;

    printf( "Data 1: \n" );
    printf( "   dia: " );
    scanf( "%d", &d1.dia );
    printf( "   mes: " );
    scanf( "%d", &d1.mes );
    printf( "   ano: " );
    scanf( "%d", &d1.ano );

    printf( "Data 2: \n" );
    printf( "   dia: " );
    scanf( "%d", &d2.dia );
    printf( "   mes: " );
    scanf( "%d", &d2.mes );
    printf( "   ano: " );
    scanf( "%d", &d2.ano );

    aux = compararData( &d1, &d2 );

    if ( aux < 0 ) {

        imprimirData( &d1 );
        printf( " <= " );
        imprimirData( &d2 );

    } else {

        imprimirData( &d2 );
        printf( " <= " );
        imprimirData( &d1 );

    }

    printf( "\n" );

    return 0;

}//Fim da função main.

int compararData( const Data *d1, const Data *d2 ) {

    if ( d1->ano < d2->ano ) {
        return -1;
    } else if ( d1->ano > d2->ano ) {
        return 1;
    } else if ( d1->mes < d2->mes ) { //ano de d1 e de d2 iguais.
        return -1;
    } else if ( d1->mes > d2->mes ) {
        return 1;
    } else if ( d1->dia < d2->dia ) { //mes de d1 e de d2 iguais.
        return -1;
    } else if ( d1->dia > d2->dia ) {
        return 1;
    }

    return 0;

}//Fim da função compararData.

void imprimirData( const Data *data ) {

    printf( "%02d/%02d/%04d", data->dia, data->mes, (*data).ano );
    //pode ser assim: data->mes, ou assim: (*data).mes

}//Fim da função imprimirData.
