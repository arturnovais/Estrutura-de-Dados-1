#include <stdio.h>
#include <stdlib.h>

void multiplica_linha(int *p, int comprimento, int largura){
	int linha, num;
	printf("\nDigite qual linha deseja multiplicar: ");
	scanf("%d", &linha);

	printf("Digite o numero que deseja multiplicar cada item da linha: ");
	scanf("%d", &num);

	p = p + (linha - 1) * largura;

	for (int i=(linha - 1) * largura; i< ((linha - 1) * largura) + largura ; i++){
		*p = *p * num;
		p ++;

	}
		
}

void multiplica_coluna(int *p, int comprimento, int largura){
	int coluna, num;
	printf("\nDigite qual coluna deseja multiplicar: ");
	scanf("%d", &coluna);

	printf("Digite o numero que deseja multiplicar cada item da coluna: ");
	scanf("%d", &num);

	p = p + coluna - 1;

	for (int i=coluna - 1 ; i < comprimento + 1; i++){
		*p = *p * num;
		p = p + largura;

	}

}

void mostrar_matriz(int *pp, int larg, int comp){

	for(int i=0; i < larg * comp; i++){
		if((i + 1) % comp == 0){
			printf("%d \n", *pp);
			pp ++;
		}

		else{
			printf("%d ",*pp);
			pp ++;
		}

		
	}

}

int main(){
	int l, c;

	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d", &l);
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d", &c);

	int matriz[l * c];
	int *pmatriz = matriz;

	printf("\nDigite sua matriz: \n");
	for(int i=0; i< l * c; i++){
		scanf("%d", &matriz[i]);
	}

	int escolha;

	printf("\nPara multiplicar sua linha digite 1\nPara multiplicar sua coluna digite 2\nPara ver a matriz digite 3\nPara finalizar o programa digite 4");

	do{
		printf("\n\nDigite sua escolha:  ");
		scanf("%d", &escolha);

		switch(escolha){
			case 1:
				multiplica_linha(pmatriz, l, c);
				break;
			case 2:
				multiplica_coluna(pmatriz, l, c);
				break;
			case 3:
				mostrar_matriz(pmatriz, l, c);
				break;
			case 4:
				break;
		}
		
		
	}while(escolha != 4);



	return 0;
}