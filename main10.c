#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	/*
	Números primos são aqueles divisíveis apenas por 1 e por eles mesmos. Estão presentes na
Matemática desde a Antiguidade, e vários métodos foram desenvolvidos a fim de verificar se
um número é de fato primo, como o Crivo de Erastóstenes.
Conhecida a beleza dos números primos, crie um programa que solicite ao usuário informar
um número inteiro positivo e:

a. indique se o número informado é primo;
b. encontre e exiba todos os números primos contidos entre 1 e o valor informado pelo usuário;

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
	
printf("insira um número: ");
scanf("%d", &num);
for(j = 1;  j <= num; j++){
if(leprimo(j) == 1){
printf("%d,", j);
}
}
}
	
	
	
	
	
	

