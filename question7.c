//Write a C program to find sum of all even numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, sum = 0, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i += 2;
    }

    printf("Sum of all even numbers between 1 to %d is: %d\n", n, sum);
    return 0;
}