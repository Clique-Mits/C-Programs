#include <stdio.h>

#define ROWS 3  // Define the number of rows in the matrix
#define COLS 3  // Define the number of columns in the matrix

// Function to sort the array
void sortArray(int arr[], int size) {
    // Simple Bubble Sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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
    int arr[ROWS * COLS];  // Array to hold all elements in row-major form
    int index = 0;
    
    // Input the matrix elements
    printf("Enter the elements of the matrix (%dx%d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
            arr[index++] = matrix[i][j];
        }
    }

    // Sort the array
    sortArray(arr, ROWS * COLS);

    // Copy the sorted values back into the matrix in row-major order
    index = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = arr[index++];
        }
    }
    
    // Output the sorted matrix
    printf("Matrix sorted in row-major order:\n");
    printMatrix(matrix);

    return 0;
}
