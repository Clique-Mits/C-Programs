#include <stdio.h>

// Function to compute GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;

    // Input the number of elements in the set
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    int numbers[n];
    
    // Input the elements in the set
    printf("Enter the numbers in the set: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Find and print all coprime pairs
    printf("Coprime pairs in the set are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (gcd(numbers[i], numbers[j]) == 1) {
                printf("(%d, %d)\n", numbers[i], numbers[j]);
            }
        }
    }

    return 0;
}
