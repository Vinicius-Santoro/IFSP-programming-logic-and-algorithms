/*
    Nome: ex.8.5.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 8, exerc�cio 5.
*/
    #include<stdio.h>
    #include<stdlib.h>

int buscar( const int *a, int n, int chave );

int main() {

    int n[10];
    int quant = 10;
    int busca;
    int aux;

    for ( int i = 0; i < quant; i++ ) {

        printf( "n[%d]: ", i );
        scanf( "%d", &n[i] );
    }

    printf( "Busca por: " );
    scanf( "%d", &busca );

    aux = buscar( n, quant, busca );

    if ( aux != -1 ) {

        printf( "O valor %d foi encontrado na posicao %d.", busca, aux );

    } else {

        printf( "O valor %d nao foi encontrado.", busca );
    }




}//Fim da fun��o main.

int buscar( const int *a, int n, int chave ) {

    for ( int i = 0; i < n; i++ ) {

        if ( chave == a[i] ) {

            return i;
        }

    }

    return -1;


}//Fim da fun��o buscar.

