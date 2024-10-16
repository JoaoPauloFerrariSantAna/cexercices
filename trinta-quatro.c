#include <stdio.h>

typedef struct {
	char nome[32]; /* porque precisa de mais detalhes */
	char endereco[32];
	char email[32];
	char tel[18]; /* porque eu não quero incluir espaços depois do DDD */
} AgendaElect;

int main() {
	int op = 0;
	int slots_preenchidos = 0;

	AgendaElect agenda[100];

	printf("Iniciando: Registrador de contatos...!\n");

	for(int i = 0; i <= 99; i++) {
		printf("-------------\n");
		printf("Você deseja cadastrar (1) ou sair do programa (-1)? ");
		scanf(" %d", &op);

		if(op == -1) {
			slots_preenchidos = i;
			break;
		}

		printf("Digite o nome do contanto (max. 32 letras): ");
		scanf(" %s", agenda[i].nome);

		printf("Endereço (max. 32 letras): ");
		scanf(" %s", agenda[i].endereco);

		printf("Email (max. 18 letras): ");
		scanf(" %s", agenda[i].email);

		printf("Número de telefone (max. 18 letras): ");
		scanf(" %s", agenda[i].tel);

	}

	for(int i = 0; i < slots_preenchidos; i++) {
		printf("-------------\n");
		printf("\t\tInformações do contanto:\n");
		printf("-Endereço: %s\n", agenda[i].endereco);
		printf("-Nome: %s\n", agenda[i].nome);
		printf("-Email: %s\n", agenda[i].email);
		printf("-Número de telefone: %s\n", agenda[i].tel);
	}

	return 0;
}
