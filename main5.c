#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	
	/*Fa�a um programa que leia os valores A, B, C e imprima na tela se a soma de A + B � menor
que C*/
	
	int a, b, c;
	
	printf("Insira um numero: ");
	scanf("%d", &a);
	
		printf("Insira um numero: ");
	scanf("%d", &b);
	
		printf("Insira um numero: ");
	scanf("%d", &c);
	
	if(a+b<c){
		printf("%d + %d � menor que %d", a, b, c);
	}else if(a+b==c){
		printf("%d + %d � igual a %d", a, b, c);
	}else{
		printf("%d + %d � maior que %d", a, b, c);
	}
	
	
	
}
