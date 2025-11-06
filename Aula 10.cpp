#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Variaveis
int qtd;

//registro
typedef struct dadosPessoa{
	int cod;
	char nome[20];
	int idade;
	float altura;
} dadosPessoa;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("Qual a quantidade de alunos? ");
	scanf("%i", &qtd);
	
	dadosPessoa Aluno[qtd];
	
	for(int i = 0; i < qtd; i++){
		printf("Digite o Cod. do aluno %i: ", i+1);
		scanf("%i", &Aluno[i].cod);
	
		printf("Digite o nome do aluno %i: ", i+1 );
		scanf("%s", &Aluno[i].nome);
	
		printf("Digite a idade do aluno %i: ", i+1 );
		scanf("%i", &Aluno[i].idade);
	
		printf("Digite a altura do aluno %i: ", i+1 );
		scanf("%f", &Aluno[i].altura);
	}
	
	
	for(int k = 0; k < qtd; k++){
		printf("\nCod. Aluno %i: %i", k+1, Aluno[k].cod);
		printf("\nNome do Aluno %i: %s", k+1, Aluno[k].nome);
		printf("\nIdade do Aluno %i: %i", k+1, Aluno[k].idade);
		printf("\nAltura do Aluno %i: %f", k+1, Aluno[k].altura);
	}
	
}
