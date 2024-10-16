#include <stdio.h>

float calc_fat(float num) {
	float result = 1.0f;

	for(float i = num; i > 0.0f; i--) {
		result *= i;
	}

	return result;
}

int sum_nums(int limit) {
	int result = 0;

	if(limit < 0) {
		return 0;
	}

	/* if the sum of number is UNTIL "limit" not INCLUDING the limit... */
	/* then, i can write this: */
	for(int i = 0; i < limit; i++) {
		result += i;
	}

	return result;
}

void exec_fat() {
	float number = 0.0f;
	printf("Write a number: ");
	scanf("%f", &number);

	printf("%f! = %f\n\n", number, calc_fat(number));
}

void exec_sum() {
	int number = 0;
	printf("Write a number: ");
	scanf("%d", &number);

	printf("Sum of numbers until %d is of %d\n", number, sum_nums(number));
}

int main() {
	int op = 0;

	do {
		printf("Hello, would you like to:\n");
		printf("1. Calculate fatorials of a number.\n");
		printf("2. Calculate the sum of numbers until a limit.\n");
		printf(">>> ");
		scanf("%d", &op);

		switch(op) {
			case 1:
				exec_fat();
			break;
			case 2:
				exec_sum();
			break;
			default:
				printf("Unknown option.\n");
			break;
		}
	} while(op != 0);
	return 0;
}
