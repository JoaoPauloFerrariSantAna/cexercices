#include <stdio.h>

int main() {
	float valores[5];

	for(int i = 0; i <= 4; i++) {
		printf("Digite um número: ");
		scanf("%f", &valores[i]);
	}

	for(int i = 4; i >= 0; i--) {
		printf("%f ", valores[i]);
	}

	printf("\n");
	return 0;
}
