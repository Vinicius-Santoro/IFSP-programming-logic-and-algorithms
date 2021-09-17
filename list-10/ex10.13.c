/*
    Nome: ex.10.13.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 13.
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
void mover( Retangulo *r, int x, int y );
void imprimirRetangulo( const Retangulo *r );

int main() {

    Ponto pontoMain1;
    Ponto pontoMain2;
    Retangulo auxMain;
    Ponto movimento;

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

    printf( "Movem em x: " );
    scanf( "%d", &movimento.x );
    printf( "Movem em y: " );
    scanf( "%d", &movimento.y );

    auxMain = novoRetangulo( &pontoMain1, &pontoMain2 );
    imprimirRetangulo( &auxMain );
    mover(&auxMain, movimento.x, movimento.y);

}//Fim da função main.

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ) {

    Retangulo aux;//variável auxiliar.

/***************************************************************

Como quero atribuir nas variáveis aux o valor da sEsq/iDir,
precisei colocar +1 ponteiro.
*x = referência na memória da variável x;
**x = valor da variável x;

****************************************************************/
    aux.superiorEsquerdo = *sEsq;
    aux.inferiorDireito = *iDir;

    return aux;

}//Fim da função novoRetangulo.

void imprimirRetangulo( const Retangulo *r) {

    printf( "Retangulo original:\n" );
    printf( "(%+01d, %+01d) =====|\n", r->superiorEsquerdo.x, r->superiorEsquerdo.y );
    printf( "|               |\n" );
    printf( "|               |\n" );
    printf( "|===== (%+01d, %+01d)\n", r->inferiorDireito.x, r->inferiorDireito.y );

}//Fim da função imprimirRetangulo.

void mover( Retangulo *r, int x, int y ) {

/*********************************************************************

Linha 097:  r apontado para o ponto X superior esquerdo, mais o mover em X.
            r apontado para o ponto Y superior esquerdo, mais o mover em Y.

Linha 101:  r apontado para o ponto Y inferior direito, mais o mover em X.
            r apontado para o ponto Y inferior direito, mais o mover em Y.

*********************************************************************/

    printf( "Retangulo movido:\n" );
    printf( "(%+01d, %+01d) =====|\n", r->superiorEsquerdo.x + x, r->superiorEsquerdo.y + y );
    printf( "|               |\n" );
    printf( "|               |\n" );
    printf( "|===== (%+01d, %+01d)\n", r->inferiorDireito.x + x, r->inferiorDireito.y + y );

}//Fim da função mover.
