#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	/* Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa que
calcule seu peso ideal, utilizando as seguintes fórmulas:
a. para homens: (72.7 * altura) – 58;
b. para mulheres: (62.1 * altura) – 44.7*/
	
	float altura, peso, result;
	int sexo;
	
	
	printf("\nInsira a Altura: ");
	scanf("%f", &altura);

	printf("\nInsira o Peso: ");
	scanf("%f", &peso);
	
	printf("\nInsira o Sexo (1 - masculino / 2 - feminino): ");
	scanf("%d", &sexo);
	
	
	
	if(sexo==1){
		result = (peso * altura) - 58;
		printf("seu peso ideal: %f", result);
	}else{
		result = (peso * altura) - 44,7;
		printf("seu peso ideal: %f", result);
	}	
	
	
	
	
}
