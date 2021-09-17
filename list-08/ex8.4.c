/*
    Nome: ex.8.4.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 8, exercício 4.
*/
    #include<stdio.h>
    #include<stdlib.h>
    #include<stdbool.h>

void decompoeData( int diaDoAno, int ano, int *mes, int *dia );
bool ehBissexto( int ano );

int main() {

   int diaDoAno;
   int dia;
   int mes = 1;
   int ano;

    printf( "Dia do ano: " );
    scanf( "%d", &diaDoAno );

    printf( "Ano: " );
    scanf( "%d", &ano );

    decompoeData( diaDoAno, ano , &mes, &dia );

    printf( "O dia %d do ano %d cai no dia %d do mes %d.", diaDoAno, ano, dia, mes );

    return 0;

}//Fim da função main.

void decompoeData( int diaDoAno, int ano, int *mes, int *dia ) {

    for ( int j = 1; j <= 12; j++ ) {

        switch ( j ) {

            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:

                if ( diaDoAno > 31 ) {

                    diaDoAno = diaDoAno - 31;
                    *mes = *mes + 1;
                    break;
                }

            case 2:

                if ( ehBissexto(ano) ) {

                    if ( diaDoAno > 29 ) {

                        diaDoAno = diaDoAno - 29;
                        *mes = *mes + 1;
                        break;
                    }

                } else {

                    if ( diaDoAno > 28 ) {

                        diaDoAno = diaDoAno - 28;
                        *mes = *mes + 1;
                        break;
                    }
                }

            case 4:
            case 6:
            case 9:
            case 11:

                if ( diaDoAno > 30 ) {

                    diaDoAno = diaDoAno - 30;
                    *mes = *mes + 1;
                    break;

                }//Fim do If.

        }//Fim do Switch Case.

    }//Fim do For.

    *dia = diaDoAno;

}//Fim da função decompoeData.

bool ehBissexto( int ano ) {

    if ( ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0 ) {

        return 1;

    } else {

        return 0;
    }

}//Fim da função ehBissexto.
