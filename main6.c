#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {

/*Faça um programa que leia dois valores inteiros A e B se os valores forem iguais deverá se
somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos
deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela.
*/

int a, b;
float c;


printf("\nInsira o valor de A: ");
scanf("%d", &a);

printf("\nInsira o valor de B: ");
scanf("%d", &b);

if(a==b){
	/*se os valores forem iguais deverá se
somar os dois*/
	c = a+b;
	printf("\nComo e igual, e somado");
	printf("\nResultado: %.2f", c);
}else{
	/*caso contrário multiplique A por B.*/
	c = a*b;
	printf("\nComo e diferente, e multiplicado");
	printf("\nResultado: %.2f", c);
}


}
