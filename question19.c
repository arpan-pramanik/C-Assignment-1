//Write a C program to enter a number and print it in words.

#include <stdio.h>

void printDigitInWords(int digit) {
    switch (digit) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
        default: break;
    }
}

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printDigitInWords(0);
        return 0;
    }

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    while (reversedNum != 0) {
        remainder = reversedNum % 10;
        printDigitInWords(remainder);
        reversedNum /= 10;
    }

    return 0;
}