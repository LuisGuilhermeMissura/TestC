#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	

int w[10];

  w[0] = 20;
  w[1] = 10;
  w[2]=w[0]+w[1];
  
  printf("Insira um valor: ");
  scanf("%d", &w[3]);
  
  printf("\n\nValor: %d\n\n", w[2]);
	
	

	
}
