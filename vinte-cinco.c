#include <stdio.h>

int main() {
	int vetor[10];
	int soma = 0;

	for(int i = 0; i < 10; i++) {
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);

		soma += vetor[i];
	}

	printf("A soma de todos os valores é de: %d\n", soma);

	return 0;
}
