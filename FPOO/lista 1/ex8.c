#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	float altura;
	float pi = 3.14;
	
	printf("Qual o raio do cilindro em cm? ");
	scanf("%f",&raio);
	
	printf("Qual a altura do cilindro em cm? ");
	scanf("%f",&altura);
	
	printf("\nA �rea da base do cilindro � = %.2f cm�",raio*raio*pi);
	printf("\nA �rea lateral do cilindro � = %.2f cm�",2*pi*raio*altura);
	printf("\nA �rea total do cilindro � = %.2f cm�",2*(raio*raio*pi)+2*(pi*raio*altura));
	printf("\nO volume do cilindro � = %.2f cm�",pi*(raio*raio)*altura);
	
	return 0;	
}
