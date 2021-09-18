/*
    Nome: ex.10.2.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 2.
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

bool ehBissexto( int ano );
int diaDoAno( const Data *data );

int main() {

    Data d1;

    printf( "dia: " );
    scanf( "%d", &d1.dia );
    printf( "mes: " );
    scanf( "%d", &d1.mes );
    printf( "ano: " );
    scanf( "%d", &d1.ano );

    printf( "O dia do ano da data %02d/%02d/%04d eh ", d1.dia, d1.mes, d1.ano);
    printf( "%d.", diaDoAno(&d1) );

    return 0;

}//Fim da função main.

int diaDoAno( const Data *data ) {

    int dia = data->dia;
    int mes = data->mes;
    int ano = data->ano;

     for ( int j = mes - 1; j >=1; j-- ) {

        switch ( j ) {

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:

                dia = dia + 31;
                break;

            case 2:

                if ( ehBissexto(ano) ) {

                    dia = dia + 29;
                    break;

                } else {

                    dia = dia + 28;
                    break;

                }

            case 4:
            case 6:
            case 9:
            case 11:

                dia = dia + 30;
                break;

        }//Fim do Switch Case.

    }//Fim do For.

    return dia;

}//Fim da função diaDoAno.

bool ehBissexto( int ano ) {

    if ( ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0 ) {

        return 1;

    } else {

        return 0;
    }

}//Fim da função ehBissexto.
