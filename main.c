#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	/*. Ler 2 números inteiros e mostrar qual é o maior e o menor deles;
*/
	int num1, num2;
	
	printf("\nInsira dois números");
	
	printf("\nPrimeiro número: ");
	scanf("%d", &num1);
	
	
	printf("\nSegundo número: ");
	scanf("%d", &num2);
	
	if(num1>num2){
		printf("\nO maior é: %d", num1);
		printf("\nO menor é: %d", num2);
	}else{
		printf("\nO maior é: %d", num2);
		printf("\nO menor é: %d", num1);
	}
	
	
}
