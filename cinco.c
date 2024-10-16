#include <stdio.h>
#include <locale.h>

int main() {
	float a = 0.0f;
	printf("Digite um número para a variável 'A', por favor: ");
	scanf("%f", &a);

	float b = 5.0f;
	printf("Digite outro número para a variável 'B', por favor: ");
	scanf("%f", &b);

	printf("A = %f, B = %f\n", a, b);

	float tmp = a;

	a = b;
	b = tmp;

	printf("A = %f, B = %f\n", a, b);
	return 0;
}

