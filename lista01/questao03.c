#include <stdio.h>

int main() {
	
	float calculaImc(float peso, float altura);
	int i, maiorI, menorI;
	float maiorImc = 0, menorImc = 0;
	
	
	struct pessoas{
		char nome[100];
		float peso, altura, imc;
	} pessoa[10];
	
	for(i = 0; i < 10; i++) {
		printf("Digite o nome %d a pessoa: ", i + 1);
		scanf("%s", &pessoa[i].nome);
		printf("Digite o peso da %d a pessoa: ", i + 1);
		scanf("%f", &pessoa[i].peso);
		printf("Digite a altura da %d a pessoa: ", i + 1);
		scanf("%f", &pessoa[i].altura);
		printf("\n");
		pessoa[i].imc = calculaImc(pessoa[i].peso, pessoa[i].altura);
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++) {
		printf("\nO IMC do(a) %s eh: %.2f", pessoa[i].nome, pessoa[i].imc);
		if(i == 0) {
			maiorImc = pessoa[i].imc;
			maiorI = i + 1;
			menorImc = pessoa[i].imc;
			menorI = i + 1;
		} else if(pessoa[i].imc > maiorImc) {
			maiorImc = pessoa[i].imc;
			maiorI = i + 1;
		} else if(pessoa[i].imc < menorImc) {
			menorImc = pessoa[i].imc;
			menorI = i + 1;
		}
	}
	
	printf("\nO maior IMC eh %.2f da %d a pessoa", maiorImc, maiorI);
	printf("\nO menor IMC eh %.2f da %d a pessoa", menorImc, menorI);
	
	return 0;	
}

float calculaImc(float peso, float altura) {
	
	return peso / (altura * altura);
}
