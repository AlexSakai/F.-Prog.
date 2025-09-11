#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Registros - Estrutura de Variável

typedef struct dados
{
    char nome[30];
    int idade, peso;
    float altura, imc;
} dados;

int main()
{
    dados Pessoa;
    printf("Digite o Nome da Pessoa: ");

    gets(Pessoa.nome);
    fflush(stdin);

    printf("Digite a idade da pessoa: ");
    scanf("%i", &Pessoa.idade);

    printf("Digite sua altura: ");
    scanf("%f", &Pessoa.altura);

    printf("Digite seu peso: ");
    scanf("%i", &Pessoa.peso);

    // processamento Cálculo de IMC
    // peso / altura²

    // saída

    Pessoa.imc = Pessoa.peso / (Pessoa.altura * Pessoa.altura);

    printf("Seu IMC é: ", Pessoa.imc);

    return 0;
}