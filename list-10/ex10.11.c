/*
    Nome: ex.10.11.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 10, exercício 11.
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
int calcularArea( const Retangulo *r );
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
    printf( "Area: %d", calcularArea(&auxMain) );

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


int calcularArea( const Retangulo *r ) {

     int largura = 0;
     int altura = 0;
     int area = 0;

/***************************************************************

Linha 85.
    Largura recebe r apontado para o ponto X superior esquerdo,
    menos o r apotado para o ponto X inferior direito.

****************************************************************/

     largura = r->superiorEsquerdo.x - r->inferiorDireito.x;
     altura = r->superiorEsquerdo.y - r->inferiorDireito.y;

     if( altura < 0 ) {

        altura *= (-1);
     }

     if( largura < 0 ) {

        largura *= (-1);
     }

     area = largura * altura;

     return area;

}//Fim da função calcularArea.

void imprimirRetangulo( const Retangulo *r) {

    printf( "(%+01d, %+01d) =====|\n", r->superiorEsquerdo.x, r->superiorEsquerdo.y );
    printf( "|               |\n" );
    printf( "|               |\n" );
    printf( "|===== (%+01d, %+01d)\n", r->inferiorDireito.x, r->inferiorDireito.y );

}//Fim da função imprimirRetangulo.
