/* ================================================================================================================================================================================

	Autor: Maysa Jhiovanna D. Marques
	Data: 25/10/2022

==================================================================================================================================================================================*/
/* ================================================================================================================================================================================*/
/* ----- Bibliotecas ----*/

#include <stdio.h>
#include <stdlib.h>

/* ================================================================================================================================================================================*/

/* ================================================================================================================================================================================*/
/* ---- Função Principal ----*/

int main(){
	int v, r, opc;
	
	printf("O valor da tensao em volts \x82: \n");
	scanf("%d", &v);
	printf("O valor da resistencia em ohms \x82: \n");
	scanf("%d", &r);
	
	printf("Agora escolha uma das opcoes abaixo para retornamos com o valor calculado: \n");
	printf("---Digite 1 para calcularmos a corrente \n");
	printf("---Digite 2 para calcularmos a potencia \n");
	printf("---Digite 3 para calcularmos o valor da tensao para I = 100mA \n");
	scanf("%d", &opc);
	
	if(opc == 1)
		printf("A corrente \x82: %d A\n",v/r);
	else if (opc == 2)
		printf("A potencia \x82: %d W\n",(v*v)/r);
	else if (opc == 3)
		printf("A tensao \x82: %d V\n",0.1*r);
		
	else
		printf("Opcao invalida! Tente novamente e escolha 1, 2 ou 3 \n");
	
	return 0;
} /*end main*/
