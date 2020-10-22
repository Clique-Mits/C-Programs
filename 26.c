//Program to add two matrices

#include <stdio.h>
int main() {
    int r, c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    int a[r][c], b[r][c], sum[r][c];

    //Accepting the first input matrix
    printf("\nEnter elements of 1st matrix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    //Accepting the second input matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Adding two matrices
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // Printing the result
    printf("\nSum of two matrices: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }

    return 0;
}
