#include <stdio.h>

int main() {
	
	int fatorialNaoRecursivo(int num);
	int fatorialRecursivo(int num);
	int num;
	
	printf("Digite um numero que queira saber o fatoria: ");
	scanf("%d", &num);
	
	printf("\nO fatorial de %d usando funcao nao recursiva eh: %d", num, fatorialNaoRecursivo(num));
	printf("\nO fatorial de %d usando funcao recursiva eh: %d", num, fatorialRecursivo(num));
	
	return 0;
}

int fatorialNaoRecursivo(int num) {
	
	int fatorial = 1;
	int i;
	
	if(num == 0 || num == 1) {
		fatorial = 1;
	} else {
		for(i = num; i > 0; i--) {
			fatorial = fatorial * i;
		}
	}
	
	return fatorial;
}

int fatorialRecursivo(int num) {
	
	int fatorial = 0;
	int i;
	
	if(num == 0 || num == 1) {
		fatorial = 1;
	} else {
		fatorial = num * fatorialNaoRecursivo(num - 1);
	}
	
	return fatorial;
}
