#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Funções (sub-programas)
//funções (obrigatoriamente retornam alguma coisa INT, CHAR. FLOAT)
//Procedimentos (poderá ou não retornar alguma coisa)

int soma(){
	int n1, n2;
	printf("Digite o primeiro valor: ");
	scanf("%i", &n1);
	
	printf("Digite o segundo valor: ");
	scanf("%i", &n2);
	
	return (n1 + n2);
}

int somaint(){
	return soma();
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("Valor: %i", soma());	
}


