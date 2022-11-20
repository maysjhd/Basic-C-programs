/* ================================================================================================================================================================================
	Laço do-while
	Autor: Maysa Jhiovanna D. Marques
	Data: 29102022

==================================================================================================================================================================================*/
/* ================================================================================================================================================================================*/
/* ----- Bibliotecas ----*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* ================================================================================================================================================================================*/

/* ================================================================================================================================================================================*/
/* ---- Função Principal ----*/

int main(){
	char opt;
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	do{
		printf("\nEntre com uma opção listada abaixo: \n");
		printf("=======\n");
		printf("N: Novo cliente \n");
		printf("C: Consultar clientes \n");
		printf("D: Deletar clientes \n");
		printf("L: Listar clientes\n");
		printf("S: Sair \n");
		printf("=======\n");
		scanf(" %c",&opt);
	
		system("CLS");
	
		switch(opt){
			case 'N':
			case 'n': printf("\nNovo cliente\n"); break;
			case 'c':
			case 'C': printf("\nConsultar cliente\n"); break;			
			case 'd':
			case 'D': printf("\nDeletar cliente\n"); break;
			case 'l':
			case 'L': printf("\nListar cliente\n"); break;
			case 's':
			case 'S': printf("\nSair \n"); break;
			
			default : printf("\nOpção Inválida\n"); 
		}
	}while(opt!='s' || opt!='S');
	return 0;
} /*end main*/





