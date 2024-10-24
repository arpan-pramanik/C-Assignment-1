//Write a C program to find sum of all prime numbers between 1 to n.

#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d is: %d\n", n, sum);
    return 0;
}