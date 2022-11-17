#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[50];
	float altura;
	float peso;
	char cpf[15];
	char sexo[10];

}pessoas;

int main(){
	char ncpf[15];
	int qtd,num_pessoa, achou = 1;

	printf("\nQuantas pessoas voce deseja cadastrar: ");
	scanf("%d", &qtd);

	pessoas pessoa[qtd];

	for(int i=0; i<qtd; i++){
		printf("\nDigite o nome da %d pessoa: ", i + 1);
		scanf("%s", pessoa[i].nome);

		printf("Digite a altura de %s: ", pessoa[i].nome);
		scanf("%f", &pessoa[i].altura);

		printf("Digite o peso de %s: ", pessoa[i].nome);
		scanf("%f", &pessoa[i].peso);

		printf("Digite o cpf de %s: ", pessoa[i].nome);
		scanf("%s", pessoa[i].cpf);

		printf("Digite o sexo de %s: ",pessoa[i].nome);
		scanf("%s", pessoa[i].sexo);

	}
	int resp;
	do{

	printf("\nDigite o cpf da pessoa que desja buscar: ");
	scanf("%s", ncpf);
	for(int i=0; i<qtd; i++){
		achou = 1;
		for(int j=0; j < sizeof(ncpf); j++){
			if(ncpf[j] != pessoa[i].cpf[j])
				achou = 0;
				break;
		}
		if(achou == 1){
			num_pessoa = i;
		}
	}

	if(achou == 0){
		printf("\nEssa pessoa nao esta cadastrada na base de dados");
	}

	else{
		float imc = pessoa[num_pessoa].peso / (pessoa[num_pessoa].altura * pessoa[num_pessoa].altura);

		printf("\nA pessoa com esse cpf e %s\nIMC de %s = %.2f", pessoa[num_pessoa].nome, pessoa[num_pessoa].nome, imc);
	}
	printf("\nDeseja pesquisar por mais alguem: [0 para nao / 1 para sim] ");
	scanf("%d", &resp);
}while(resp != 0);


	return 0;
}