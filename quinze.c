#include <stdio.h>

int main() {
	for(int i = 0; i <= 100; i++) {
		if(i % 2 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n");

	return 0;
}
