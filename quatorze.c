#include <stdio.h>

int main() {
	int numero = 0;
	int soma = 0;
	int maior = numero;
	int menor = numero;

	for(int i = 0; i < 10; i++) {
		printf("Digite um número: ");
		scanf("%d", &numero);

		if(numero > maior) {
			maior = numero;
		}

		if(numero < menor) {
			menor = numero;
		}

		soma += numero;
	}
	
	// porque temos cinco valores
	int media = soma / 5;

	printf("Soma: %d\n", soma);
	printf("Média: %d\n", media);
	printf("Maior número: %d\n", maior);
	printf("Menor número: %d\n", menor);

	return 0;
}
