/*
    Nome: ex.9.9.c
    Autor: Vinicius Naziozeno Santoro do Rio.
    Descrição: Capítulo 9, exercício 9.
*/
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

void inverter( char *destino, const char *origem );

int main() {

    char texto[41];
    char inverso[41];

    printf("Digite uma palavra: ");
    fgets(texto, 41, stdin);

    texto[strlen(texto)-1] = '\0';

    inverter(inverso, texto);/*--> Quando for um array, na chamada eu não preciso de &. <--*/

    printf( "Invertida: %s", inverso );

    return 0;

}//Fim da main.

void inverter( char *destino, const char *origem ) {

    int j = 0;
    for (int i = strlen(origem) - 1; i >= 0; i--)		//Esse -1 é para descontar o '/0'
	{
		destino[j] = origem[i];
		j++;
	}

	destino[j] = '\0';

	return;

}//Fim da função inverter.



