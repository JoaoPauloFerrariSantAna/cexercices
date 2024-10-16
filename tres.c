#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguse");

	printf("Vamos calcular descontos de produtos!\n");

	double valor_mercadoria = 0.0;
	printf("Qual o valor original da mercadoria? ");
	scanf("%lf", &valor_mercadoria);

	double desconto = 0.0;
	printf("Desconto (%%): ");
	scanf("%lf", &desconto);

	double valor_desconto	= valor_mercadoria * (desconto / 100);
	// https://www.nuvemshop.com.br/ferramentas/calculadora-de-descontoI
	double valor_descontado	= valor_mercadoria - valor_desconto;

	printf("---------------------------------\n");
	printf("Preço original: %lf, Desconto: %lf%%\n", valor_mercadoria, desconto);
	printf("Valor do produto com desconto: %lf\n", valor_descontado);
	printf("---------------------------------\n");

	return 0;
}
