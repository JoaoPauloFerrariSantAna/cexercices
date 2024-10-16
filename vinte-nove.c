#include <stdio.h>

int main() {
	float mtz[4][3];

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			printf("Digite um número para colocar na posição %dx%d: ", i + 1, j + 1);
			scanf("%f", &mtz[i][j]);
		}
	}

	float maior = mtz[0][0];

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 3; j++) {
			if(mtz[i][j] > maior) {
				maior = mtz[i][j];
			}
		}
	}

	printf("O maior número nesta matriz foi: %f\n", maior);

	return 0;
}
