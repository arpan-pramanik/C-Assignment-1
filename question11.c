//Write a C program to find the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, fd, ld;

    printf("Enter any number: ");
    scanf("%d", &num);
    ld = num % 10;
    fd = num;
    while (fd >= 10) {
        fd /= 10;
    }

    printf("First digit: %d\n", fd);
    printf("Last digit: %d\n", ld);

    return 0;
}