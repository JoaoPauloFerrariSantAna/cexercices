#include <stdio.h>
#include <locale.h>

int main() {
	char primeiro_nome[16];
	printf("Me diga seu primeiro nome (max. letras: 16): ");

	// https://www.sitepoint.com/data-input-and-output-in-c-part-2/
	scanf("%16s", primeiro_nome);

	float nota1 = 0.0f;
	printf("Me diga qual foi a sua primeira nota: ");
	scanf("%f", &nota1);

	float nota2 = 0.0f;
	printf("Me diga qual foi a sua segunda nota: ");
	scanf("%f", &nota2);

	// porque temos duas notas
	float media = (nota1 + nota2) / 2;

 	printf("A média sua, %s, é de %f\n", primeiro_nome, media);
	return 0;
}
