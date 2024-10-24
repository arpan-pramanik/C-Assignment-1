// Write a C program to calculate factorial of a number.

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (i = 1; i <= n; ++i) {
            if (factorial > ULLONG_MAX / i) {
                printf("Error! Factorial of %d is too large to be computed.\n", n);
                return 1;
            }
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}