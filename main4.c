#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {

/*Crie um programa que a partir de um número informado pelo usuário identifique se este é
par ou ímpar;
*/

int num;


printf("Insira um número");
scanf("%d", &num);


if(num % 2 == 0){
		printf("\nO número é par");
	}
	else{
		printf("O número é impar");
	}


}
