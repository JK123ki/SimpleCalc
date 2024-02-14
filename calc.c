//ENE212-0181/2021
//JACOB KIRIGHA
#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, sum, diff;

    // Get user input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform addition and subtraction separately
    sum = num1 + num2;
    diff = num1 - num2;

    // Display results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", diff);

    // Perform addition and subtraction at the same time
    sum = num1 + num2;
    diff = num1 - num2;

    // Display results
    printf("Sum and Difference at the same time:\n");
    printf("Sum: %.2f, Difference: %.2f\n", sum, diff);

    return 0;
}
