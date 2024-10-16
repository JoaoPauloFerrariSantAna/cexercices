#include <stdio.h>

int main() {
	int vetor[30];

	printf("Digite '0' para sair.\n");

	for(int i = 0; i <= 29; i++) {
		int numero = 0;
		printf("Digite um número: ");
		scanf("%d", &numero);

		if(numero == 0) {
			break;
		}

		vetor[i] = numero;
	}

	printf("Você digitou os seguintes números: ");

	for(int i = 0; i <= 29; i++) {
		printf("%d, ", vetor[i]);
	}

	printf("\n");
	return 0;
}
