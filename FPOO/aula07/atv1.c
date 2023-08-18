#include <stdio.h>
int main(){
	char nome[20];
	float peso, altura, imc, sair;
	
	do{
		printf("Digite seu nome: ");
		scanf("%s" ,&nome);
		printf("Informe seu peso em kg: ");
		scanf("%f" ,&peso);
		printf("Informe sua altura em metros:");
		scanf("%f" ,&altura);
		imc = peso / (altura * altura);
		
		printf("O imc = %.2f\n",imc);
		
		if(imc <= 18.5){
			printf("abaixo do peso");
		}else if (imc >= 18.6 && imc < 24.9){
			printf("peso ideal");
		}else if (imc >= 25.0 && imc < 29.9){
			printf("levemente acima do peso");
		}else if (imc >= 30.0 && imc < 34.9){
			printf("obesidade grau I");
		}else if (imc >= 35.0 && imc < 39.9){
			printf("obesidade grau II");
		}else if (imc >= 40){
			printf("obesidade grau III");
		}
	
		printf("\n\n Digite 1 para continuar ou 0 para sair: ");
		scanf("%d" ,&sair);
	}while(sair);
	
	return 0;
}
