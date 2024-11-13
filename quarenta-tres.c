#include <stdio.h>

int pow_number(int number, int pow) {
    if(pow == 1) {
        return number;
    }

    return number * pow_number(number, pow - 1);
}

int main() {
    printf("%d\n", pow_number(2, 10));
    return 0;
}