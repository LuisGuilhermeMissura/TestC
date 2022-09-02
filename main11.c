#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	
	float salb, inss, sall, desc;
	
	printf("Insira o salario: ");
	scanf("%f", &salb);
		
	if(salb <= 1212.00){
		inss = 7.50;
		desc = salb * (inss / 100);
	}
	else if(salb <= 2427.35){
		inss = 9;
		desc = salb * (inss / 100);
	}
	else if(salb <= 3641.03){
		inss = 12;
		desc = salb * (inss / 100);
	}
	else{
		inss = 14;
		desc = salb * (inss / 100);
	}
		
	if(desc > 992.21){
		desc = 992.21;
	}
	
	sall = salb - desc;

	printf("\nsalario: %.2f\n",salb);
	printf("\ninss: %.2f\n",inss);
	printf("\ndesconto: R$ %.2f\n",desc);
	printf("\nsalario liquido: R$ %.2f\n",sall);
}
	
	

