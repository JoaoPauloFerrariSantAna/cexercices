#include <stdio.h>

int main() {
	printf("Você pode digitar até 35 letras, e então o programa encerrará\n");
	printf("Para sair do programa digite \"$\" para sair.\n");

	for(int i = 0; i <= 35; i++) {
		char ch = ' ';
		printf("Digite uma letra: ");
		scanf(" %c", &ch);

		if(ch == '$') {
			break;
		}
	}

	return 0;
}
