#include <stdio.h>

#define MAX 100  // Maximum size of the matrix

// Function to read a matrix
void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter elements for a %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];

    // Input dimensions
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Read first matrix
    printf("Matrix 1:\n");
    readMatrix(matrix1, rows, cols);

    // Read second matrix
    printf("Matrix 2:\n");
    readMatrix(matrix2, rows, cols);

    // Add the matrices
    addMatrices(matrix1, matrix2, result, rows, cols);

    // Print the result matrix
    printf("Resultant Matrix after addition:\n");
    printMatrix(result, rows, cols);

    return 0;
}
