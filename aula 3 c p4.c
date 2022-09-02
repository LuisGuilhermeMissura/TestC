#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */



// o \t é como se fosse o tab, é mais usado na tabulação de exibição

void main() {

float p1[10];
float p2[10];
float media[10];
float maiorM = 0;
float menorM = 99;
int i;

for(i=0; i<10; i++){
	
	printf("\nAluno [%d]: ", i);
	
printf("\nInsita  a nota da p1: ");	
	scanf("%f", &p1[i]);
	
	printf("\nInsita  a nota da p2: ");	
	scanf("%f", &p2[i]);
	
	media[i]=(p1[i]+p2[i])/2;
	
}

for(i=0; i<10; i++){
printf("\n=================================");
printf("\nCodigo do aluno: %d", i);
if(media[i]>=6){
	printf("\nMedia: %.2f", media[i]);
	printf("\nAprovado!");
}else{
	printf("\nMedia: %.2f", media[i]);
	printf("\nReprovado!");
}
//printf("\nMedia: ", media[i]);
printf("\nNota p1: %.2f", p1[i]);
printf("\nNota p2: %.2f", p2[i]);

/*
if(media[i]>maiorM){
	maiorM=media[i];
	
	printf("\nMaior Media%.2f", maiorM);
	
}*/

//printf("\nMaior Média: %.2f", MaiorM);
	

}
printf("\n=================================");

for(i=0; i<10; i++){
	if(media[i]>maiorM){
	maiorM=media[i];
	

	
}
}
for(i=0; i<10; i++){
	if(media[i]<menorM){
	menorM=media[i];
	
	
	
}


}

	printf("\nMaior Media: %.1f", maiorM);
	printf("\nMenor Media: %.1f", menorM);
}



