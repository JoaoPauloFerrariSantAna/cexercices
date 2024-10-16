#include <stdio.h>

int main() {
	for(int quanti_patinhos = 5; quanti_patinhos >= 0; quanti_patinhos--) {
		printf("%d patinhos foram passear.\n", quanti_patinhos);
		printf("Além das montanhas para brincar\n");
		printf("A mamãe gritou \"Quack, quack quack!\"\n");

		if(quanti_patinhos == 0) {
			printf("Mas nenhum patinho voltou de lá!\n");
		} else {
			printf("Mas só %d patinhos voltaram de lá.\n", quanti_patinhos);
		}
	}

	return 0;
}
