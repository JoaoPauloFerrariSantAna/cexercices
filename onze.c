#include <stdio.h>

int main() {
	float nota_total = 0;

	for(int i = 0; i < 4; i++) {
		float nota = 0.0f;
		printf("Digite a sua nota: ");
		scanf("%f", &nota);

		nota_total += nota;
	}

	// porque temos quatro notas
	float media = nota_total / 4;
	float nota_exame = 10 - media;

	// https://www.freecodecamp.org/news/c-operator-logic-operators-in-c-programming/
	if(media >= 4 && media < 7) {
		printf("Você irá ficar de exame.\n");
		printf("Você precisa tirar uma nota maior que %f para passar.\n", nota_exame);
	}

	if(media >= 7) {
		printf("Você foi aprovado!\n");
	}

	return 0;
}
