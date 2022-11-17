#include <stdio.h>

int main(){
	int tamanho;

	printf("Digite o tamanho da matriz: ");
	scanf("%d", &tamanho);

	int matriz[tamanho][tamanho];

	for(int i=0; i<tamanho; i++){
		printf("Digite a linha %d: ", i + 1);

		for(int j=0; j<tamanho; j++){
			scanf("%d", &matriz[i][j]);
		}

	}

	int menor = matriz[0][0];

	for(int i=0; i< tamanho; i++){
		for(int j=0; j<tamanho; j++){
			if(matriz[i][j] <= menor){
				menor = matriz[i][j];	
			}	
		}
	}


	int linhas[tamanho], c = 0;

	for (int i=0; i < tamanho; i++){
		for(int j=0; j< tamanho; j++){
			if(matriz[i][j] == menor){
				linhas[c] = i + 1;
				c++;
			}
		}
	}

	printf("A(s) linhas que possuem o menor numero e(sao):");
	for(int i=0; i<c;i++){
		printf(" %d ", linhas[i]);
	}


	return 0;
}