#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	/*. Ler 2 n�meros inteiros e mostrar qual � o maior e o menor deles;
*/
	int num1, num2;
	
	printf("\nInsira dois n�meros");
	
	printf("\nPrimeiro n�mero: ");
	scanf("%d", &num1);
	
	
	printf("\nSegundo n�mero: ");
	scanf("%d", &num2);
	
	if(num1>num2){
		printf("\nO maior �: %d", num1);
		printf("\nO menor �: %d", num2);
	}else{
		printf("\nO maior �: %d", num2);
		printf("\nO menor �: %d", num1);
	}
	
	
}
