#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {

/*Crie um programa que a partir de um n�mero informado pelo usu�rio identifique se este �
par ou �mpar;
*/

int num;


printf("Insira um n�mero");
scanf("%d", &num);


if(num % 2 == 0){
		printf("\nO n�mero � par");
	}
	else{
		printf("O n�mero � impar");
	}


}
