#include <stdio.h>

int main() {
	
	int calculaExponencial(int num, int expoente);
	float calculaExponencialReal(float num, int expoente);
	int num1, expoente1, expoente2;
	float num2;
	int resultadoInt = 0;
	float resultadoReal = 0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num1);
	printf("\nDigite um expoente para esse numero inteiro: ");
	scanf("%d", &expoente1);
	resultadoInt = calculaExponencial(num1, expoente1);
	printf("\nResultado dessa exponenciacao: %d\n", resultadoInt);
	
	printf("\nDigite um numero real: ");
	scanf("%f", &num2);
	printf("\nDigite um expoente para esse numero inteiro: ");
	scanf("%d", &expoente2);
	resultadoReal = calculaExponencialReal(num2, expoente2);
	printf("\nResultado dessa exponenciacao: %.2f\n", resultadoReal);
	
	return 0;
}

int calculaExponencial(int num, int expoente) {
	
	int i;
	int resultadoInt = 1;
	
	if(expoente == 1) {
		resultadoInt = num;
	} else if(expoente == 0) {
		resultadoInt = 0;
	} else if(expoente != 0 || expoente != 1) {
		for(i = 0; i < expoente; i++) {
			resultadoInt = resultadoInt * num;
		}
	}
	
	return resultadoInt;
}

float calculaExponencialReal(float num, int expoente) {
	
	int i;
	float resultadoReal = 1;
	
	if(expoente == 1) {
		resultadoReal = num;
	} else if(expoente == 0) {
		resultadoReal = 0;
	} else if(expoente != 0 || expoente != 1) {
		for(i = 0; i < expoente; i++) {
			resultadoReal = resultadoReal * num;
		}
	}
	
	return resultadoReal;
}
