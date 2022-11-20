/* ================================================================================================================================================================================

	Autor: Maysa Jhiovanna D. Marques
	Data: 26/10/2022

==================================================================================================================================================================================*/
/* ================================================================================================================================================================================*/
/* ----- Bibliotecas ----*/

#include <stdio.h>
#include <stdlib.h>

/* ================================================================================================================================================================================*/


/* ================================================================================================================================================================================*/
/* ---- Função Principal ----*/

int main(){
	int idade;
	char estado_civil;
	
	printf("Qual a sua idade? \n");
	scanf("%d", &idade);
	printf("Qual seu estado civil? \n");
	printf("---------------------------------\n");
	printf("Para solteiro(a) digite --- s \n");
	printf("Para casado(a) digite --- c \n");
	printf("Para divorciado(a) digite --- d \n");
	printf("Para viuvo(a) digite --- v \n");
	printf("---------------------------------\n");
	scanf(" %c", &estado_civil);
	
	switch(estado_civil){
		case 's':
		case 'S':
			printf("Voce tem %d anos e \x82 solteiro(a)\n", idade);
			break;
		case 'c':
		case 'C':
			printf("Voce tem %d anos e \x82 casado(a)\n", idade);
			break;
		case 'd':
		case 'D':
			printf("Voce tem %d anos e \x82 divorciado(a)\n", idade);
			break;
		case 'v':
		case 'V':
			printf("Voce tem %d anos e \x82 viuvo(a)\n", idade);
			break;
	default:
		printf("Opcao invalida\n");
	}

	return 0;
} /*end main*/






























