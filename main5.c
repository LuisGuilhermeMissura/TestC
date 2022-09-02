#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	
	/*Faça um programa que leia os valores A, B, C e imprima na tela se a soma de A + B é menor
que C*/
	
	int a, b, c;
	
	printf("Insira um numero: ");
	scanf("%d", &a);
	
		printf("Insira um numero: ");
	scanf("%d", &b);
	
		printf("Insira um numero: ");
	scanf("%d", &c);
	
	if(a+b<c){
		printf("%d + %d É menor que %d", a, b, c);
	}else if(a+b==c){
		printf("%d + %d É igual a %d", a, b, c);
	}else{
		printf("%d + %d É maior que %d", a, b, c);
	}
	
	
	
}
