#include <stdio.h>

int main() {
	int mtz[5][6];

	// gerar mtz
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 6; j++) {
			printf("Digite um número (%dx%d): ", i + 1, j + 1);
			scanf("%d", &mtz[i][j]);
		}
	}

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%d\t", mtz[i][j] * 4);
		}
		printf("\n");
	}

	return 0;
}
