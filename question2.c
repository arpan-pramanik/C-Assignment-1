//Write a C program to print all natural numbers in reverse (from n to 1).


#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    i = n;
    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    return 0;
}