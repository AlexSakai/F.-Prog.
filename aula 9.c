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
    int i, qtdPessoas;
    printf("Calcular o IMC de quantas pessoas: ");
    scanf("%d", &qtdPessoas);
    fflush(stdin);

    dados Pessoa[qtdPessoas]; 

    for (i = 0; i < qtdPessoas; i++)
    {

        printf("Digite o Nome da Pessoa: ");
        scanf("%s", &Pessoa[i].nome);
        fflush(stdin);

        printf("Digite a idade da pessoa: ");
        scanf("%i", &Pessoa[i].idade);

        printf("Digite sua altura: ");
        scanf("%f", &Pessoa[i].altura);

        printf("Digite seu peso: ");
        scanf("%i", &Pessoa[i].peso);

        Pessoa[i].imc = Pessoa[i].peso / (Pessoa[i].altura * Pessoa[i].altura);
    }

    for (i = 0; i < qtdPessoas; i++)
    {
        printf("Seu nome é: %s", Pessoa[i].nome);
        printf("\nSua idade é: %i", Pessoa[i].idade);
        printf("\nSua altura é: %.2f", Pessoa[i].altura);
        printf("\nSeu peso é: %i", Pessoa[i].peso);
        printf("\nSeu IMC é: %f", Pessoa[i].imc);

        if (Pessoa[i].imc >= 40)
        {
            printf("A pessoa se encontra na Classificação: Obesidade Mórbida\n");
        }
        else if (Pessoa[i].imc >= 35)
        {
            printf("A pessoa se encontra na Classificação: Obesidade Moderada\n");
        }
        else if (Pessoa[i].imc >= 30)
        {
            printf("A pessoa se encontra na Classificação: Obesidade Leve\n");
        }
        else if (Pessoa[i].imc >= 25)
        {
            printf("A pessoa se encontra na Classificação: Acima do Peso\n");
        }
        else if (Pessoa[i].imc >= 18.6)
        {
            printf("A pessoa se encontra na Classificação: Peso Ideal\n");
        }
        else
        {
            printf("A pessoa se encontra na Classificação: Abaixo do Peso\n");
        }
    }
    return 0;
}