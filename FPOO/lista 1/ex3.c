#include <stdio.h>
 int main(){
 	char nome[50];
 	float salario;
 	float indicepercentual;
 	printf("coloque seu nome: ");
 	gets(nome);
 	printf("informe o salario: ");
	scanf("%f",&salario);
	printf("indice percentual: ");
	scanf("%f",&indicepercentual);
	printf("\n%s",nome);
	printf("\n%.2f",(indicepercentual/100+1)*salario);
}
