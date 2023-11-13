#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    // Get user input for a number
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num; // Convert negative numbers to positive for counting digits
    } else if (num == 0) {
        count = 1; // Handle the case when the number is 0
    }

    long long originalNum = num; // Store the original number

    // Count the number of digits and print them
    printf("Digits: ");
    for (; num > 0; num /= 10) {
        int digit = num % 10;
        printf("%d ", digit);
        count++;
    }
    printf("\n");

    printf("Number of digits: %d\n", count);

    return 0;
}
