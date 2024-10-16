#include <stdio.h>

void calc_media() {
	float quantidade = 0.0f;
	float soma = 0.0f;
	float i;
	float media;
	
	printf("Quantos valores irão ser lidos? ");
	scanf("%f", &quantidade);

	for(i = 0; i < quantidade; i++) {
		float num = 0;
		printf("Digite um número: ");
		scanf("%f", &num);

		soma += num;
	}

	media = soma / quantidade;

	printf("A média é de: %f\n", media);
}

void calc_are_cubo() {
	float area;
	float area_face;

	printf("Quanto a área vale? ");
	scanf("%f", &area);

	area_face = 6 * area * area;

	printf("A = %f\n", area_face);
}

void calc_fatorial() {
	float i;
	float fator;
	float fatorial = 1;

	printf("Qual o número que você deseja calcular o fatorial? ");
	scanf("%f", &fator);

	for(i = fator; i > 0; i--) {
		fatorial *= i;
	}

	printf("%.2f! = %.2f\n", fator, fatorial);
}

int main() {
	int op = 0;

	printf("Você gostaria de\n");

	do {
		printf("\n");
		printf("1. Calcular a média de alguns valores.\n");
		printf("2. Calcular a área de um cubo.\n");
		printf("3. Calcular o fatorial de um número.\n");
		printf("0. Sair.\n");

		printf(">>> ");
		scanf("%d", &op);

		switch(op) {
			case 0:
			break;

			case 1:
				calc_media();
			break;

			case 2:
				calc_are_cubo();
			break;

			case 3:
				calc_fatorial();
			break;

			default:
				printf("Opção desconhecida.\n");
			break;
		}
	} while(op != 0);

	return 0;
}
