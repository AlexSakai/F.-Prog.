#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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

