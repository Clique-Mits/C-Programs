#include <stdio.h>

// Recursive function to calculate factorial of a number
long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Check for valid input
    if (N < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print factorials from 1 to N
    printf("Factorials from 1 to %d:\n", N);
    for (int i = 1; i <= N; i++) {
        printf("Factorial of %d = %lld\n", i, factorial(i));
    }

    return 0;
}
