/*
    Nome: ex.7.9.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descri��o: Cap�tulo 7, exerc�cio 9.
*/
    #include<stdio.h>
    #include<stdlib.h>


int lePositivo( void );
int ehTriangulo( int ladoA, int ladoB, int ladoC );
int tipoTriangulo( int ladoA, int ladoB, int ladoC );

int main() {

    int triangulo1[5];
    int triangulo2[5];
    int triangulo3[5];

    for ( int i = 0; i < 5; i++ ) {

        printf( "LadoA[%d]: ", i );

        triangulo1[i] = lePositivo( );

        printf( "LadoB[%d]: ", i );

        triangulo2[i] = lePositivo( );

        printf( "LadoC[%d]: ", i );

        triangulo3[i] = lePositivo( );

    }//Fim do For.


    for ( int i = 0; i < 5; i++ ) {

        int aux = tipoTriangulo ( triangulo1[i], triangulo2[i], triangulo3[i] );

        if ( !aux ) {   //Se a fun��o tipoTriangulo retornar 0.

            printf( "Valores %d, %d e %d: nao formam um triangulo\n", triangulo1[i], triangulo2[i], triangulo3[i] );

        } else if ( aux == 1 ) {    //Se a fun��o tipoTriangulo retornar 1.

            printf( "Valores %d, %d e %d: triangulo equilatero\n", triangulo1[i], triangulo2[i], triangulo3[i] );

        } else if ( aux == 2 ) {    //Se a fun��o tipoTriangulo retornar 2.

             printf( "Valores %d, %d e %d: triangulo isosceles\n", triangulo1[i], triangulo2[i], triangulo3[i] );

        }  else {   //Se a fun��o tipoTriangulo retornar 3.

             printf( "Valores %d, %d e %d: triangulo escaleno\n", triangulo1[i], triangulo2[i], triangulo3[i] );
        }

    }//Fim do For.

}//Fim do main.

int lePositivo( void ) {

    int m;

    do {

        scanf( "%d", &m );

        if( m <= 0 ) {
            printf( "Entre com um valor positivo:\n" );
        }

    } while( m <= 0);

    return m;

}//Fim da funcao lePositivo1.

int ehTriangulo( int ladoA, int ladoB, int ladoC ) {

   if ( ladoA >= ladoB + ladoC ||
        ladoB >= ladoC + ladoA ||
        ladoC >= ladoA + ladoB ) {

        return 0;

    } else {

        return 1;
    }

}//Fim da fun��o ehTriangulo.

int tipoTriangulo( int ladoA, int ladoB, int ladoC ) {

    if ( ehTriangulo( ladoA, ladoB, ladoC ) == 0 ) {

        return 0;   //N�o forma um tri�ngulo.

    } else if ( ladoA == ladoB && ladoB  == ladoC ) {

        return 1; //Tri�ngulo equil�tero.

    } else if ( ladoA == ladoB ||
                ladoA == ladoC ||
                ladoB == ladoC ) {

		return 2; //Tri�ngulo is�sceles.

	} else {

        return 3; //Tri�ngulo escaleno.
	}

}//Fim da fun��o tipoTriangulo.


