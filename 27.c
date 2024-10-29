#include <stdio.h>

#define ROWS 3  // Define the number of rows in the matrix
#define COLS 3  // Define the number of columns in the matrix

// Function to sort each row in the matrix
void sortRows(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        // Sort each row using a simple sorting algorithm (e.g., Bubble Sort)
        for (int j = 0; j < COLS - 1; j++) {
            for (int k = 0; k < COLS - j - 1; k++) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    // Swap elements
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
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

    // Sort each row
    sortRows(matrix);
    
    // Output the sorted matrix
    printf("Matrix with each row sorted:\n");
    printMatrix(matrix);

    return 0;
}
