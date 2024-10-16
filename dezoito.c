#include <stdio.h>

int main() {
	int vezes = 0;

	printf("Quantas letras você quer que sejam lidas? ");
	scanf("%d", &vezes);

	for(int i = 0; i < vezes; i++) {
		char carac = ' ';
		printf("Digite uma letra: ");
		scanf(" %c", &carac);
	}

	return 0;
}
