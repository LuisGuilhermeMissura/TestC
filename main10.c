#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	/*
	N�meros primos s�o aqueles divis�veis apenas por 1 e por eles mesmos. Est�o presentes na
Matem�tica desde a Antiguidade, e v�rios m�todos foram desenvolvidos a fim de verificar se
um n�mero � de fato primo, como o Crivo de Erast�stenes.
Conhecida a beleza dos n�meros primos, crie um programa que solicite ao usu�rio informar
um n�mero inteiro positivo e:

a. indique se o n�mero informado � primo;
b. encontre e exiba todos os n�meros primos contidos entre 1 e o valor informado pelo usu�rio;

	*/
	
	
	int leprimo(int k){
	int i, mod = 0;
	
	for(i = 1; i <= k; i++){	
	if(k % i == 0){
	mod++;
	}
	}
	if(mod == 2){
	return 1;
	}
	else{
	return 0;
	}
}
int main() {	
int j, num;
	
printf("insira um n�mero: ");
scanf("%d", &num);
for(j = 1;  j <= num; j++){
if(leprimo(j) == 1){
printf("%d,", j);
}
}
}
	
	
	
	
	
	

