#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	int maior, menor;
	printf("Digite 2 valores inteiros(d� espa�o entre eles): ");
	scanf("%d %d", &a, &b);
	 
	if(a>b){
		maior = a;
		menor = b; 
	}else{
		maior = b;
		menor = a;
	} 
	printf("\nO maior numero �: %d", maior);
	printf("\nO menor numero �: %d", menor);
	
	return 0;
}
