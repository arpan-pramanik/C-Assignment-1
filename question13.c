//Write a C program to swap the f and last digits of a number.

#include <stdio.h>

int main() {
    int n, f, l, digits = 0, temp, div = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    l = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
        div *= 10;
    }
    f = temp;

    n = n - f * div + l * div - l + f;

    printf("Number after swapping first and last digits: %d\n", n);
    return 0;
}