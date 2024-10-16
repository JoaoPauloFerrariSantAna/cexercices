#include <stdio.h>

int main() {
	int numero = 0;

	printf("Digite um número: ");
	scanf("%d", &numero);

	printf("%d é ", numero);

	if(numero % 2 == 0) {
		printf("par.\n");
	} else {
		printf("ímpar.\n");
	}

	return 0;
}
