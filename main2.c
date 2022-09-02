#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {


/*Ler um número inteiro e indicar se este número é: positivo, negativo ou zero;*/
int num;

printf("\nInsira um numero: ");
	scanf("%d", &num);
	
	
	if(num < 0){
		printf("\nSeu numero é negativo");
	}else if(num > 0){
		printf("\nSeu número é Positivo");
	}else if(num == 0){
		printf("\nSeu número é 0");
	}else{
		printf("\nInválido");
	}
	
	
}
