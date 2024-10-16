#include <stdio.h>

int main() {
	for(int i = 0; i <= 499; i++) {
		if(i % 3 == 0) {
			printf("%d ", i);
		}
	}

	printf("\n");
	return 0;
}
