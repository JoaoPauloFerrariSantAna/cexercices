#include <stdio.h>
#include <locale.h>

int main() {
	printf("Vamos calcular a área e o primetro de um quadrado!\n");

	float lado = 0.0f;
	printf("Quanto vale os lados do quadrado? ");
	scanf("%f", &lado);

	float area_quadrad = lado * lado;
	float peri_quadrad = 4.0f * lado;

	printf("Área do quadrado: %f\n", area_quadrad);
	printf("Perimetro do quadrado: %f\n", peri_quadrad);
	return 0;
}

