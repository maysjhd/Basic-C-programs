/* ================================================================================================================================================================================

	Autor: Maysa Jhiovanna D. Marques
	Data: 24/10/2022 

==================================================================================================================================================================================*/
/* ================================================================================================================================================================================*/
/* ----- Bibliotecas ----*/

#include <stdio.h>
#include <stdlib.h>

/* ================================================================================================================================================================================*/

/* ================================================================================================================================================================================*/
/* ---- Fun��o Principal ----*/

int main(){
	int value_1, value_2;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &value_1);
	printf("Digite o segundo valor: \n");
	scanf("%d", &value_2);
	
	if(value_1 == value_2){
		printf("Os valores sao iguais\n");
	}
	if(value_1 != value_2){
		printf("Os valores sao diferentes\n");
	}
	if(value_1 > value_2){
		printf("%d eh maior que %d\n",value_1, value_2);
	}
	if(value_1 < value_2){
		printf("%d eh menor que %d\n",value_1, value_2);
	}
	if(value_1 >= value_2){
		printf("%d eh maior ou igual que %d",value_1, value_2);
	}
	if(value_1 <= value_2){
		printf("%d eh menor ou igual que %d\n",value_1, value_2);
	}
	
	return 0;
} /*end main*/




















