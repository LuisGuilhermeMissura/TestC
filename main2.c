#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {


/*Ler um n�mero inteiro e indicar se este n�mero �: positivo, negativo ou zero;*/
int num;

printf("\nInsira um numero: ");
	scanf("%d", &num);
	
	
	if(num < 0){
		printf("\nSeu numero � negativo");
	}else if(num > 0){
		printf("\nSeu n�mero � Positivo");
	}else if(num == 0){
		printf("\nSeu n�mero � 0");
	}else{
		printf("\nInv�lido");
	}
	
	
}
