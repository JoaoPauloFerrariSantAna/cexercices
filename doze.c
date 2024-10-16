#include <stdio.h>

int main() {
	// https://www.debit.com.br/tabelas/tabelas-irrf
	float salario_mensal = 0.0f;

	printf("Quanto você ganha mensalmente? ");
	scanf("%f", &salario_mensal);

	// preciso definir a alíquota
	// para isso eu preciso olhar no salario mensal e defini-la
	float aliquota = 0.0f;
	if(salario_mensal >= 1903.99f && salario_mensal <= 2826.65) {
		aliquota = 7.5f;
	}

	if(salario_mensal >= 2826.66f && salario_mensal <= 3751.05f) {
		aliquota = 15.0f;
	}

	if(salario_mensal >= 3751.06f && salario_mensal <= 4664.68f) {
		aliquota = 22.5f;
	}

	printf("Alíquota: %.2f%%\n", aliquota);

	return 0;
}
