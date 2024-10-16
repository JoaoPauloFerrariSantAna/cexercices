#include <stdio.h>

int main() {
	for(int i = 0; i <= 500; i++) {
		if(i % 3 == 0) {
			printf("%d\t", i);
		}
	}

	printf("\n");

	return 0;
}
