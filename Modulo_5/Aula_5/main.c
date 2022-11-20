/* ================================================================================================================================================================================

	Autor: Maysa Jhiovanna D. Marques
	Data: 19/11/2022

==================================================================================================================================================================================*/
/* ----- Bibliotecas ----*/

#include <stdio.h>
#include <stdlib.h>

/* ================================================================================================================================================================================*/
/* ---- Função Principal ----*/

int main(){
	
	int chute, numero, tentativas = 1;
	
	printf("Digite um numero para o seu amigo acertar\n");
	scanf("%d", &numero);
	system("CLS");
	
	for(chute = 0; chute != numero;){
		
		printf("Tente acertar o numero: \n");
		scanf("%d", &chute);
		
		if(chute == numero) break;
		
		if(tentativas <= 10){
			printf("ERROU! Tentativa %d \n", tentativas);
			tentativas++;
		}
		else{
			printf("ERROU! \n");
			break;
		}
	}
	if(tentativas <= 10 ) printf("ACERTOU! \n");
	system("PAUSE");
	
	return 0;
} /*end main*/










































