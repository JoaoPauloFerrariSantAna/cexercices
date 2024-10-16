#include <stdio.h>

int main() {
	// como calcular o perímetro de um polígo?
	// - Somar as medidas de todos os lados
	// - Supor que o polígono seja genérico
	//	- Supor que o polígono genérico tenha 3 lados

	float perimetro = 0.0f;

	for(int i = 0; i < 3; i++) {
		float lado = 0.0f;
		printf("Qual é o comprimento do lado do polígono? ");
		scanf("%f", &lado);

		perimetro += lado;
	}

	printf("O polígono tem %f centimetros.\n", perimetro);

	return 0;
}
