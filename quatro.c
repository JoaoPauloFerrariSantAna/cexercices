#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	float a = 0.0f;
	printf("Digite um número: ");
	scanf("%f", &a);

	float b = 0.0f;
	printf("Digite um outro número: ");
	scanf("%f", &b);

	float c = 0.0f;
	printf("Digite um terceiro número: ");
	scanf("%f", &c);

	float x = (2 * a * b) + (3 * a * c) - (4 * b * c);

	printf("X = %f\n", x);

	return 0;
}

