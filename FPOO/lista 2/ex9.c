#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	char nome[30];
	float salario;
	float aumento;
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite o salario: ");
	scanf("%f" ,&salario);
	
	if(1500.00 <= salario && salario < 1750.00){
		aumento = 0.15 * salario;
		printf("\nFuncionario: %s" ,nome);
		printf("\nAumento: %.2f", aumento);
		printf("\nSalario reajustado: %.2f" ,salario + aumento);
	}else if(1750.00 <= salario && salario < 2000.00){
		aumento = 0.12 * salario;
		printf("\nFuncionario: %s" ,nome);
		printf("\nAumento: %.2f", aumento);
		printf("\nSalario reajustado: %.2f" ,salario + aumento);
	}else if(2000.00 <= salario && salario < 3000.00){
		aumento = 0.09 * salario;
		printf("\nFuncionario: %s" ,nome);
		printf("\nAumento: %.2f", aumento);
		printf("\nSalario reajustado: %.2f" ,salario + aumento);
	}else if(salario >= 3000.00){
		aumento = 0.06 * salario;
		printf("\nFuncionario: %s" ,nome);
		printf("\nAumento: %.2f", aumento);
		printf("\nSalario reajustado: %.2f" ,salario + aumento);
	}else{
		printf("\nFuncionario %s" ,nome);
		printf("\nO funcionario não tera aumento, portanto seu salario continua %.2f" ,salario);
	}
	return 0;
}
