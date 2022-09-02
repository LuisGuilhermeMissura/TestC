#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void main() {
	
	/*Escreva um programa em pseudocódigo que receba um número e imprima uma das
mensagens: “é múltiplo de 5” ou “não é múltiplo de 5”.*/
	
	int num;
	
	printf("\nDigite um número: ");
	scanf("%d", &num);
	
	 if(num%5==0){
    printf("\n %d é multiplo de 5", num);
    }
    else{
    printf("\n %d não é multiplo de 5", num);
    }
	
	
}
