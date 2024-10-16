#include <stdio.h>

int main() {
	int op = 0;

	do {
		printf("AÇÕES:\n");
		printf("1. Somar dois números.\n");
		printf("2. Comparar três números e ver qual é o maior.\n");
		printf("3. Calcular o fatorial de um número.\n");
		printf("4. Calcular a exponeciação (a^b).\n");
		printf("0. Sair do programa.\n");

		printf("-----------------------------------\n");
		printf(">> ");
		scanf("%d", &op);

		// https://www.reddit.com/r/programminghelp/comments/yxavh6/error_a_label_can_only_be_part_of_a_statement_and/
		switch(op) {
			case 1: {
				float numero1 = 0.0f;
				printf("Digite um número: ");
				scanf("%f", &numero1);

				float numero2 = 0.0f;
				printf("Digite um outro número: ");
				scanf("%f", &numero2);

				float soma = numero1 + numero2;
				printf("%f + %f = %f\n", numero1, numero2, soma);
			}
			break;

			case 2: {
				float numero = 0;
				float maior = numero;

				for(int i = 0; i < 3; i++) {
					printf("Digite um número: ");
					scanf("%f", &numero);

					if(numero > maior) {
						maior = numero;
					}
				}
				printf("O maior número digitado foi %f\n", maior);
			}
			break;

			case 3: {
				float numero = 0.0f;
				float fatorial = 1.0f;

				printf("Digite um número: ");
				scanf("%f", &numero);

				for(int i = numero; i > 0; i--) {
					fatorial *= i;
				}

				printf("%f! = %f\n", numero, fatorial);
			}
			break;

			case 4: {
					float numero = 0.0f;
					printf("Digite um número: ");
					scanf("%f", &numero);

					float expoente = 0;
					printf("Digite o expoente: ");
					scanf("%f", &expoente);

					// Já que precisamos manter o mesmo número
					// a gente tem que deixar um número aqui
					float resultado = 1.0f;

					for(int i = 0; i < expoente; i++) {
						// e multiplicar aqui
						// porque vai virar "num * 1 = num" dai vai virar "num * num = num2"
						// e "numN * num = numN2"
						resultado *= numero;
					}

					printf("%f^%f = %f\n", numero, expoente, resultado);
				}
			break;

			default:
				printf("Opção desconhecida.\n");
			break;
		}
		printf("-----------------------------------\n");
	} while(op != 0);

	return 0;
}
