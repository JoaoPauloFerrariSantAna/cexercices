#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	printf("Vamos fazer a média de quatro números!\n");

	int num1 = 0;
	printf("Primeiro valor: ");
	scanf("%d", &num1);

	int num2 = 0;
	printf("Segundo valor: ");
	scanf("%d", &num2);

	int num3 = 0;
	printf("Terceiro valor: ");
	scanf("%d", &num3);

	int num4 = 0;
	printf("Quarto valor: ");
	scanf("%d", &num4);
	
	// porque temos quatro valores para fazer a média
	int media = (num1 + num2 + num3 + num4) / 4;

	printf("A média é de %d\n", media);

	return 0;
}
