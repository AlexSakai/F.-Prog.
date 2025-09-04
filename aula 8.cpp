#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
//Variáveis
int qtd;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Qual a quantidade de dados de armazenamento? ");
	scanf("%i", &qtd);
	
	int notas[qtd];
	
	for(int i = 0; i < qtd; i++){
		printf("\nDigite sua nota: ");
		scanf("%i", &notas[i]);
	}
	
	for(int i = 0; i < qtd; i++){
		printf("\n%d", notas[i]);
	}
}
*/

//Variáveis


int main(){	
	setlocale(LC_ALL, "portuguese");
	
	int L, C;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%i", &L);
	
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d", &C);
	
	int mat [L][C], valor;
	
	printf("Digite muitos valores: ");
	for(int i = 0; i < 	L; i++){
		printf("\n%da linha: \n", i+1);
		for(int j = 0; j < L; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nSua matriz é: \n");
	for(int i = 0; i < C; i++){
		for(int j = 0; j < C; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
