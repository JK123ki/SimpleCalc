//ENE212-0181/2021
//JACOB KIRIGHA
#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, sum, diff,mult,div;

    // Get user input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform addition and subtraction separately
    sum = num1 + num2;
    diff = num1 - num2;
    mult =  num1 * num2;
    div =  num1 / num2;
    // Display results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", diff);
    printf("product:%.2f\n",mult);
    printf("division:%2f\n",div);
    

    return 0;
}
