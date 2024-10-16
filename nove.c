#include <stdio.h>

int main() {
	float num1 = 0.0f;
	float num2 = 0.0f;

	// dividir o primeiro pelo segundo
	// verificar se o primeiro ou o segundo é zero

	printf("Digite um número: ");
	scanf("%f", &num1);

	printf("Digite um número: ");
	scanf("%f", &num2);

	if(num1 == 0.0f) {
		printf("Não é possível realizar divisão com zero.\n");
	} else if(num2 == 0.0f) {
		printf("Não é possível realizar divisão com zero.\n");
	} else {
		float divi = num1 / num2;

		printf("%.2f / %.2f = %.2f\n", num1, num2, divi);
	}

	return 0;
}
