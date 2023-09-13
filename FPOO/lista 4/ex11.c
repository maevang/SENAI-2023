#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main(){
	setlocale(LC_ALL, "");
	
	int vetor[10], i;
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		vetor[i] = rand() % 101;
	}
	
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("|%d| ", vetor[i]);
	}
	printf("\n_________________________________________________\n");
	
	int valorProcurado, posicaoValor = -1;
	
	while(posicaoValor == -1){
		printf("\nDigite um n�mero da sequ�ncia: ");
		scanf("%d", &valorProcurado);
		
		for(i = 0; i < 10; i++){
			if(vetor[i] == valorProcurado){
				posicaoValor = i;
				break;
			}
		}
		
		if(posicaoValor == -1){
			printf("\nN�mero n�o encontrado na sequ�ncia acima. Digite um n�mero novamente!");
			printf("\n_____________________________________________________________________\n");
		}
	}
	
	printf("____________________________________________\n");
	printf("\nO n�mero %d est� na posi��o %d da sequ�ncia.\n", valorProcurado, posicaoValor);
	printf("____________________________________________\n");
		
	return 0;
}
