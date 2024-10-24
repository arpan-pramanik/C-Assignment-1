//Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter n value: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum is: %d\n", sum);

    return 0;
}