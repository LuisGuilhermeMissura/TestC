#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	/*Crie um programa que receba o sal�rio de um funcion�rio o percentual de aumento que
dever� ser aplicado, calcule e mostre:

a. sal�rio atual;
b. valor do aumento;
c. % aplicado
d. novo sal�rio*/
	
	float sal, aumento, novsal, vaum, vaum2;
	int porc;
	
	printf("\nInsira o Salario atual: ");
	scanf("%f", &sal);
	
	printf("\nInsira a porcentagem de aumento: ");
	scanf("%d", &porc);
	
	vaum = sal * porc / 100;
	novsal = sal+vaum;
	
	printf("====================================================================");
	printf("\nSalario antigo: %.2f", sal);
	printf("\nPorcentagem de aumento de %.2f", porc);
	printf("\nPorcentagem Aplicada: %f", vaum);
	printf("\nNovo Salario: %f", novsal);
	printf("====================================================================");
	
}
