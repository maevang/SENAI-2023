#include <stdio.h>
#include <locale.h>
int main(){
	int d;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual ser� a dist�ncia(km) que o avi�o sobrevoar�: ");
	scanf("%d",&d);
	
	printf("O tempo para o avi�o 747-300 sobrevoar uma dist�ncia de %dkm a uma velocidade constante de 900km/h ser�: %d hora(s)",d,d/900);
	
	return 0;
}
