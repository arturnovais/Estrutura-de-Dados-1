#include <stdio.h>
#include <stdlib.h>

void preencher_vetor(int *p, int tam){
	printf("\nPreencha seu vetor de inteiros: ");

	for(int i=0; i<tam; i++){
		scanf("%d", p+i);
	}
}

void mostrar_vetor(int *p, int tam){
	printf("\nO vetor digitado foi: ");
	for(int i=0; i<tam; i++){
		printf("%d ", *(p + i));
	}
}


int main(){
	int *vetor, tamanho;

	printf("\nDigite o tamanho do vetor que quer passar: ");
	scanf("%d", &tamanho);

	vetor = malloc(sizeof(int) * tamanho);
	if(!vetor){
		printf("Memoria nao alocada");
	}

	preencher_vetor(vetor, tamanho);
	mostrar_vetor(vetor, tamanho);

	return 0;
}