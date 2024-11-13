#include <stdio.h>

int pow_number(int number, int pow) {
    if(pow == 1) {
        return number;
    }

    return number * pow_number(number, pow - 1);
}

int main() {
    int number;
    int expoent;

    printf("Write a number: ");
    scanf("%d", &number);

    printf("Write the expoent: ");
    scanf("%d", &expoent);

    printf("%d^%d = %d\n", number, expoent, pow_number(number, expoent));
    return 0;
}