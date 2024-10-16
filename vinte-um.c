#include <stdio.h>

int main() {
	int soma = 0;
	int i = 0;

	while(i <= 100) {
		soma += i;
		i++;
	}

	printf("Resultado da soma: %d\n", soma);

	return 0;
}
