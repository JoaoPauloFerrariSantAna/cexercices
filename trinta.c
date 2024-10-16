#include <stdio.h>

int main() {
	// para me facilitar a vida...
	// se a matriz é quadrada, então: m = n
	float mtz[5][5];

	float soma = 0.0f;

	// alimentar a matriz primeiro...
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			printf("Insira um número na posição %dx%d: ", i + 1, j + 1);
			scanf("%f", &mtz[i][j]);

			// somar diagonal principal
			if(j == i) {
				soma += mtz[i][j];
			}
		}
	}

	printf("Soma da diagonal principal: %f\n", soma);
	return 0;
}
