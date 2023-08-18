#include <stdio.h>
#include <locale.h>

//ler o preço de um produto
//se maior que R$1.000,00 aplicar o desconto de 8%
int main(){
	setlocale(LC_ALL, "Portuguese");
	float preco;
	float desconto = 0.08;
	printf("Digite o preco do produto: ");
	scanf("%f" ,&preco);
	 if (preco > 1000){
	 	printf("\nO valor do produto com 8%% de desconto sera R$ %.2f",preco-(desconto*preco));
	 }
	 else{
	 	printf("\nO valor do produto contimua sendo R$.2f" ,preco);
	 }
	 return 0;
}
