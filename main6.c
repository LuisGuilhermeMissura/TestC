#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {

/*Fa�a um programa que leia dois valores inteiros A e B se os valores forem iguais dever� se
somar os dois, caso contr�rio multiplique A por B. Ao final de qualquer um dos c�lculos
deve-se atribuir o resultado para uma vari�vel C e mostrar seu conte�do na tela.
*/

int a, b;
float c;


printf("\nInsira o valor de A: ");
scanf("%d", &a);

printf("\nInsira o valor de B: ");
scanf("%d", &b);

if(a==b){
	/*se os valores forem iguais dever� se
somar os dois*/
	c = a+b;
	printf("\nComo e igual, e somado");
	printf("\nResultado: %.2f", c);
}else{
	/*caso contr�rio multiplique A por B.*/
	c = a*b;
	printf("\nComo e diferente, e multiplicado");
	printf("\nResultado: %.2f", c);
}


}
