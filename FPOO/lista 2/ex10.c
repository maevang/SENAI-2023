#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	int nota1, nota2, nota3;
	int media;
	printf("Digite a primeira nota do aluno: ");
	scanf("%d" ,&nota1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%d" ,&nota2);
	printf("Digite a terceira nota do aluno: ");
	scanf("%d" ,&nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	if(media >= 6){
		printf("\nO aluno esta aprovado");
	}else if(media < 6 && media >=4){
		printf("\nO aluno esta de recuperação");
	}else{
		printf("\nO aluno esta aprovado");
	}
	return 0;
}
