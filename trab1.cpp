/* 
	Contexto: Um laboratório de química precisa calcular a concentração de uma
solução após várias diluições sucessivas. Cada diluição envolve adicionar uma
quantidade específica de solvente à solução original. O laboratório deseja
saber a concentração final da solução e verificar se ela ainda é viável para
experimentos, com uma concentração mínima exigida de 0,5 Molar.

	Tarefa: Desenvolva um algoritmo em C que receba as concentrações e volumes
adicionados em cada diluição e calcule a concentração final da solução. O
programa deve verificar se a concentração final atende ao valor mínimo exigido.
*/

#include <stdio.h>
#include <locale.h>

//Variáveis
float conc0, concF, vol0, volS, volF;
int nDil;
const float concV = 0.5;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//input
	printf("\nDigite o Volume Inicial da solução: ");
	scanf("%f", &vol0);
		
	printf("\nDigite a Concentração Inicial da solução: ");
	scanf("%f", &conc0);
	
	printf("\nQual será o volume do solvente? ");
	scanf("%f", &volS);
	
	printf("\nQuantas vezes a solução será diluída? ");
	scanf("%i", &nDil);
	
	//Contas
	volF = vol0 + (nDil* volS);
	concF = (conc0 * vol0)/volF;
	
	//output
	if(concF - concV > 0){
		printf("\nA solução final é de: %.2f", concF);
		printf("\nA solução ainda é viável para experimentos! ");
	} else {
		printf("\nA solução final é de: %.2f", concF);
		printf("\nA solução não é mas viável...");
	}
}
