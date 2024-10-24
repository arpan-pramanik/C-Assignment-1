//Write a C program to find frequency of each digit in a given integer.

#include <stdio.h>

int main() {
    int number, digit;
    int frequency[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;
        frequency[digit]++; 
        number /= 10;   
    }

    printf("Digit frequency:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }

    return 0;
}