#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void main() {
	
	/*Escreva um programa em pseudoc�digo que receba um n�mero e imprima uma das
mensagens: �� m�ltiplo de 5� ou �n�o � m�ltiplo de 5�.*/
	
	int num;
	
	printf("\nDigite um n�mero: ");
	scanf("%d", &num);
	
	 if(num%5==0){
    printf("\n %d � multiplo de 5", num);
    }
    else{
    printf("\n %d n�o � multiplo de 5", num);
    }
	
	
}
