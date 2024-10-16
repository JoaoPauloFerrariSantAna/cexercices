#include <stdio.h>

int main() {
	int soma = 0;

	for(int a = 1; a <= 7; a++) {
		soma += (3 * (a * a)) + a - 2;
	}

	printf("Resultado da soma: %d\n", soma);

	return 0;
}
