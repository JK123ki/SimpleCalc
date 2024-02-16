#include <stdio.h>

// Function to generate Fibonacci series up to n
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d: ", n);

    while (first <= n) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;

    // Get user input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Generate Fibonacci series
    generateFibonacci(n);

    return 0;
}
