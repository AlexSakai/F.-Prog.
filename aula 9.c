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

    Pessoa.imc = Pessoa.peso / (Pessoa.altura * Pessoa.altura);

    printf("Seu nome é: %s", Pessoa.nome);
    printf("\nSua idade é: %i", Pessoa.idade);
    printf("\nSua altura é: %.2f", Pessoa.altura);
    printf("\nSeu peso é: %i", Pessoa.peso);
    printf("\nSeu IMC é: %f", Pessoa.imc);

    if (Pessoa.imc >= 40)
    {
        printf("\nA pessoa se encontra na Classificação: Obesidade Mórbida");
    }
    else if (Pessoa.imc >= 35)
    {
        printf("\nA pessoa se encontra na Classificação: Obesidade Moderada");
    }
    else if (Pessoa.imc >= 30)
    {
        printf("\nA pessoa se encontra na Classificação: Obesidade Leve");
    }
    else if (Pessoa.imc >= 25)
    {
        printf("\nA pessoa se encontra na Classificação: Acima do Peso");
    }
    else if (Pessoa.imc >= 18.6)
    {
        printf("\nA pessoa se encontra na Classificação: Peso Ideal");
    }
    else
    {
        printf("\nA pessoa se encontra na Classificação: Abaixo do Peso");
    }

    return 0;
}