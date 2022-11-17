#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char nome[30];
	int idade;
	float peso, altura;
	
} pessoa;

int main(){

	pessoa pessoas[3];

	for(int i=0; i<3;i++){
		printf("\nDigite o nome da %d pessoa: ", i+1);
		scanf("%s", pessoas[i].nome);

		printf("Digite a idade de %s: ", pessoas[i].nome);
		scanf("%d",&pessoas[i].idade);

		printf("Digite o peso de %s: ",pessoas[i].nome);
		scanf("%f", &pessoas[i].peso);

		printf("Digite a altura de %s: ",pessoas[i].nome);
		scanf("%f", &pessoas[i].altura);
	}

	printf("\n------------------------------------------------------------------------------------------\n");

	for(int i=0; i<3;i++){
		printf("\nNome: %s\nIdade: %d\nPeso: %.2f\nAltura: %.2f\n",pessoas[i].nome,pessoas[i].idade,pessoas[i].peso,pessoas[i].altura);
	}



	return 0;
}