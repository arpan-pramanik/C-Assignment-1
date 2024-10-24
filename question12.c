//Write a C program to find sum of first and last digit of a number.

#include <stdio.h>

int main() {
    int num, f, l, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    l = num % 10;

    while (num >= 10) {
        num = num / 10;
    }
    f = num;

    sum = f + l;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}