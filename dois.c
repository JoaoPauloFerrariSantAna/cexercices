#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Vamos calcular a área de um triângulo!\n");

	float altura = 0.0f;
	printf("Qual é a altura do triângulo? ");
	scanf("%f", &altura);

	float base = 0.0f;
	printf("E a base? ");
	scanf("%f", &base);

	float area = (base * altura) / 2;

	printf("A área do triângulo é de %f metros", area);
	return 0;
}
