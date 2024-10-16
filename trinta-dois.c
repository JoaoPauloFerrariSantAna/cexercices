#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Aluno {
	char nome[16];
	char ra[7]; /* porque é um tamanho fixo */
	char cidade[32];
	float media;
};

int main() {
	struct Aluno aluno1;
	struct Aluno aluno2;
	struct Aluno aluno3;

	printf("Digite o seu nome (max. 16 letras): ");
	scanf(" %s", aluno1.nome);
	
	printf("Digite o seu RA (max. 7 números): ");
	scanf(" %s", aluno1.ra);

	printf("Digite a sua média: ");
	scanf(" %f", &aluno1.media);

	printf("Digite o nome de sua cidade em minuscúlo (max. 32 letras): ");
	scanf(" %s", aluno1.cidade);

	printf("Digite o seu nome (max. 16 letras): ");
	scanf(" %s", aluno2.nome);

	printf("Digite o seu RA (max. 7 números): ");
	scanf(" %s", aluno2.ra);

	printf("Digite a sua média: ");
	scanf(" %f", &aluno2.media);

	printf("Digite o nome de sua cidade em minuscúlo (max. 32 letras): ");
	scanf(" %s", aluno2.cidade);

	printf("Digite o seu nome (max. 16 letras): ");
	scanf(" %s", aluno3.nome);
	
	printf("Digite o seu RA (max. 7 números): ");
	scanf(" %s", aluno3.ra);

	printf("Digite a sua média: ");
	scanf(" %f", &aluno3.media);

	printf("Digite o nome de sua cidade em minuscúlo (max. 32 letras): ");
	scanf(" %s", aluno3.cidade);

	float maior = aluno1.media;
	float menor = aluno1.media;

	if(strcmp(aluno1.cidade, "marilia") == 0) {
		printf("%s mora em Marília.\n", aluno1.nome);
	}

	if(strcmp(aluno2.cidade, "marilia") == 0) {
		printf("%s mora em Marília.\n", aluno2.nome);
	}

	if(strcmp(aluno3.cidade, "marilia") == 0) {
		printf("%s mora em Marília.\n", aluno3.nome);
	}

	if(aluno2.media > maior) {
		printf("%s tem uma média maior.\n", aluno2.nome);
	}

	if(aluno3.media > maior) {
		printf("%s tem uma média maior.\n", aluno3.nome);
	}

	if(aluno2.media < menor) {
		printf("%s tem uma média menor.\n", aluno2.ra);
	}

	if(aluno3.media < menor) {
		printf("%s tem uma média menor.\n", aluno3.ra);
	}

	return 0;
}
