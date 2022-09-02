#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {

/*
Uma venda de alimentos precisa contabilizar suas vendas. Para tanto, crie um programa que
solicite o usuário o informe de 10 vendas. A cada venda deverá ser informado: codigo
produto, valor unitario e quantidade.
O programa deverá:

a. A cada venda informada mostrar o valor total (quantidade * valor unitario);
b. Valor médio vendido;
c. Mostrar o código do produto, quantidade e valor total do produto com maior venda;
d. Mostrar o código do produto, quantidade e valor total do produto com menor venda;
e. Mostrar o valor Total Vendido;
f. Mostrar a quantidade total de itens vendidos;
*/


	int cod, qtd, cont;
	float valU, vm, m, itenV, vendi;
	cont = 1;
	
	printf(".:Vendas:.\n\n");
	
	while(cont <= 10){
		
		printf("\n\n%d", cont);
		
		printf("\ninsira o cod: ");
		scanf("%d", &cod);
		
    	printf("\ninsira o valor: ");
    	scanf("%f", &valU);
    	
    	vm = vm + valU;
    	
    	printf("\ninforme a qtd: ");	
    	scanf("%d", &qtd);
    	
    	itenV = itenV + qtd;
    	
    	cont++;
	}
	
	m = vm / 10;
	vendi = qtd * valU;
	
	printf("\nvalor da venda: %.2f", vendi);
	printf("\nValor medio: %.f", m);
	printf("\nValor total:  %.f", vm);
	printf("\nValor Itens Vendidos %.f" , itenV);
	

	


}
