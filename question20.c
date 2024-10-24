//Write a C program to print all ASCII characters with their values.

#include <stdio.h>

int main() {
    for (int i = 0; i < 128; i++) {
        printf("ASCII value of character %c = %d\n", i, i);
    }
    return 0;
}