#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	int n[5], i, j;
	
	printf("Digite 5 n�meros inteiros: ");
	
	for(i = 0; i < 5; i++){
		scanf("%d", &n[i]);
	}
	
	printf("\nN�meros na ordem digitada: ");
	for(i = 0; i < 5; i++){
		printf("%d ", n[i]);
	}
	
	int aux;
	
	for(i = 0; i < 5; i++){
		for(j = i + 1; j < 5; j++){
			if(n[i] < n[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
		}
	}
	
	printf("\nN�meros em ordem decrescente: ");
	for(i = 0; i < 5; i++){
		printf("%d ", n[i]);
	}
	
	return 0;
}
