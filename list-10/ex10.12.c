/*
    Nome: ex.10.12.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 10, exerc�cio 12.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir );
Ponto obterCentro( const Retangulo *r );
void imprimirRetangulo( const Retangulo *r );

int main() {

    Ponto pontoMain1;
    Ponto pontoMain2;
    Retangulo auxMain;

    printf( "Ponto superior esquerdo\n" );
    printf( "   x: " );
    scanf( "%d", &pontoMain1.x );
    printf( "   y: " );
    scanf( "%d", &pontoMain1.y );

    printf( "Ponto inferior direito\n" );
    printf( "   x: " );
    scanf( "%d", &pontoMain2.x );
    printf( "   y: " );
    scanf( "%d", &pontoMain2.y );

    auxMain = novoRetangulo( &pontoMain1, &pontoMain2 );
    imprimirRetangulo( &auxMain );
    obterCentro(&auxMain);
//    printf( "Centro: %d", obterCentro(&auxMain) );

}//Fim da fun��o main.

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ) {

    Retangulo aux;//vari�vel auxiliar.

/***************************************************************

Como quero atribuir nas vari�veis aux o valor da sEsq/iDir,
precisei colocar +1 ponteiro.
*x = refer�ncia na mem�ria da vari�vel x;
**x = valor da vari�vel x;

****************************************************************/
    aux.superiorEsquerdo = *sEsq;
    aux.inferiorDireito = *iDir;

    return aux;

}//Fim da fun��o novoRetangulo.

Ponto obterCentro( const Retangulo *r ) {

    Ponto centro;

    centro.x = ( r->superiorEsquerdo.x + r->inferiorDireito.x ) / 2 ;
    centro.y = ( r->superiorEsquerdo.y + r->inferiorDireito.y ) / 2 ;

    printf( "Centro: (%+01d, %+01d)", centro.x, centro.y );

}//Fim da fun��o obterCentro.

void imprimirRetangulo( const Retangulo *r) {

    printf( "(%+01d, %+01d) =====|\n", r->superiorEsquerdo.x, r->superiorEsquerdo.y );
    printf( "|               |\n" );
    printf( "|               |\n" );
    printf( "|===== (%+01d, %+01d)\n", r->inferiorDireito.x, r->inferiorDireito.y );

}//Fim da fun��o imprimirRetangulo.
