/* ================================================================================================================================================================================
	�C para F
	Autor: Maysa Jhiovanna D. Marques
	Data: 20/10/2022

==================================================================================================================================================================================*/

/* ================================================================================================================================================================================*/
/* ----- Bibliotecas ----*/

#include <stdio.h>
#include <stdlib.h>

/* ================================================================================================================================================================================*/


/* ================================================================================================================================================================================*/
/* ---- Fun��o Principal ----*/
int main(){
	int   graus=0;
	float temp=0;
		
		
	
	printf("Qual o valor da Temperatura em graus celcius?: ");
	
	scanf("%d", &graus);
	temp =(float)((1.8*graus) + 32);
	
	printf("O valor de %d em F equivale a %1.f", graus,temp);
	
	return 0;
} /*end main*/










