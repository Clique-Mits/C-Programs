#include <stdio.h>

#define ROWS 3  // Define the number of rows in the matrix
#define COLS 3  // Define the number of columns in the matrix

// Function to find the largest row sum and column sum
void findLargestSums(int matrix[ROWS][COLS], int *largestRowSum, int *largestColSum) {
    *largestRowSum = 0; // Initialize largest row sum
    *largestColSum = 0; // Initialize largest column sum

    // Find the largest row sum
    for (int i = 0; i < ROWS; i++) {
        int rowSum = 0; // Initialize row sum for the current row
        for (int j = 0; j < COLS; j++) {
            rowSum += matrix[i][j]; // Calculate row sum
        }
        if (rowSum > *largestRowSum) {
            *largestRowSum = rowSum; // Update largest row sum
        }
    }

    // Find the largest column sum
    for (int j = 0; j < COLS; j++) {
        int colSum = 0; // Initialize column sum for the current column
        for (int i = 0; i < ROWS; i++) {
            colSum += matrix[i][j]; // Calculate column sum
        }
        if (colSum > *largestColSum) {
            *largestColSum = colSum; // Update largest column sum
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS];

    // Input the matrix elements
    printf("Enter the elements of the matrix (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the input matrix
    printf("Input Matrix:\n");
    printMatrix(matrix);

    int largestRowSum, largestColSum;

    // Find the largest sums
    findLargestSums(matrix, &largestRowSum, &largestColSum);

    // Output the results
    printf("Largest Row Sum: %d\n", largestRowSum);
    printf("Largest Column Sum: %d\n", largestColSum);

    return 0;
}
