#include <stdio.h>
#include <locale.h>
int main(){

	setlocale(LC_ALL, "Portuguese");
	int a;
	int c;
	
	printf("Digite a quantidade de alqueires que a fazenda possu�: ");
	scanf("%d",&a);
	
	printf("Digite a quantidade de caminh�es que a fazenda possu�: ");
	scanf("%d",&c);
	
	printf("\nA fazenda produz %d toneladas de laranjas",a*250);
	printf("\nCada viagem � poss�vel levar %d toneladas de laranjas",c*20);
	
	printf("\nS�o necess�ria(s) %d viagens para transportar todas as laranjas para a f�brica",(a*250)/(c*20));
	return 0;
}
