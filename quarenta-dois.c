#include <stdio.h>

int sum(int number) {
    if(number <= 0) {
        /* because we do not have the nothing else to sum */
        return 0;
    }

    /* 'cause we want the current value plus the last one */
    /* not the last value plus the last value */
    return number + sum(number - 1);  
}

int main() {
    int number = 0;
    int total;

    printf("Write a number here: ");
    scanf("%d", &number);

    total = sum(number);
    printf("%d\n", total);

    return 0;
}