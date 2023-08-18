#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, salariofamilia, salariofinal;
	int filhos;
	printf("Digite o valor do salario: ");
	scanf("%f" ,&salario);
	printf("Digite o numero de filhos: ");
	scanf("%d" ,&filhos);
	
	if (salario < 2000){
		salariofamilia = filhos*45;
		salariofinal = salario + salariofamilia;
		printf("\nO funcionario ira receber R$ %.2f" ,salariofinal);
	}else{
		printf("\nO funcionario não ira receber salario familia, portando ele ira receber R$ %.2f" ,salario);
	}
	return 0;
}
