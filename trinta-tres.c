#include <stdio.h>

typedef struct {
	char name[16];
	char ra[7];
	float media;
} Aluno;

int main() {
	Aluno alunos[10];

	for(int i = 0; i <= 9; i++) {
		printf("Digite o nome do aluno (max. 16 letras): ");
		scanf(" %s", alunos[i].name);

		printf("Digite o RA do aluno: ");
		scanf(" %s", alunos[i].ra);

		printf("Digite a média do aluno %s: ", alunos[i].name);
		scanf(" %f", &alunos[i].media);
	}

	float maior = alunos[0].media;
	float menor = alunos[0].media;

	for(int i = 0; i <= 9; i++) {
		if(alunos[i].media > maior) {
			printf("O aluno %s tem uma nota maior do que a média.", alunos[i].name);
		}

		if(alunos[i].media < menor) {
			printf("O aluno de RA %s tem uma nota menor do que a média.\n", alunos[i].ra);
		}
	}

	return 0;
}
