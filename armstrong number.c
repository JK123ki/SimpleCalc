#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num, numDigits = 0, sum = 0;

    // Count the number of digits in the given number
    while (originalNum != 0) {
        originalNum /= 10;
        ++numDigits;
    }

    originalNum = num;

    // Calculate the sum of digits each raised to the power of the number of digits
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, numDigits);
        originalNum /= 10;
    }

    return num == sum;
}

int main() {
    int n;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is an Armstrong number
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
