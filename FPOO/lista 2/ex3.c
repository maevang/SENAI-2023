#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario;
	float desconto;
	printf("Digite o valor do seu salario: ");
	scanf("%f",salario);
	
	if (salario<=1212.00){
		desconto=salario*0.075;
	}else if(salario<=2427.35){
		desconto=salario*0.09;
	}else if (salario<=3641.03){
		desconto=salario*0.12;
	}else if(salario<=7087.22){
		desconto=salario*0.14;
	}else desconto=7087.22*0.14;
		
		printf("\nO valor do desconto sera de R$  %.2f" ,desconto);
		printf("\nO valor do salario liquido sera de R$ %.2f" ,salario-desconto);
	return 0;	
}
