/*
    Nome: ex.8.1.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 8, exerc�cio 1.
*/
    #include<stdio.h>
    #include<stdlib.h>

void somatorioMedia( float a[], int n, float *somatorio, float *media );

int main() {

    float array[10] = { 0 };
    float somatorioMain;
    float mediaMain;

    for ( int i = 0; i < 10; i++ ) {

        printf( "n[%d]: ", i );
        scanf( "%f", &array[i] );
    }

    //EM = endere�o de mem�ria.
    //( array da linha 13, tamanho do array, EM somatorioMain, EM mediaMain).

    somatorioMedia( array, 10, &somatorioMain, &mediaMain );

    printf( "Somatorio: %.2f\n", somatorioMain );
    printf( "Media: %.2f", mediaMain );

}//Fim da fun��o main.

void somatorioMedia( float a[], int n, float *somatorio, float *media ) {

    *somatorio = 0;

    for ( int i = 0; i < n; i++ ) {

        *somatorio = *somatorio + a[i];
    }

    *media = *somatorio / n;

}//Fim da fun��o somatorioMedia.


