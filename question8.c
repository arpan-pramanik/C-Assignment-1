//Write a C program to find sum of all odd numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }

    printf("Sum of all odd numbers between 1 to %d is: %d\n", n, sum);
    return 0;
}