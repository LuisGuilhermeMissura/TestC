#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {


int w[10];
int j[10];

int cont=0;
for(; cont<10; cont++){
	
	printf("\nDigite os valores das posições: [%d]", cont);
	scanf("%d", &w[cont]);

j[cont]=w[cont]*5;

}

printf("\nExibe Valores");
for(cont=0; cont<10; cont++){
	
	printf("\n%d \t %d", w[cont],j[cont]);
}




}
