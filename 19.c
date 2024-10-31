#include <stdio.h>

// Function to identify the logic function based on outputs
void identifyFunction(int outputs[8]) {
    int allZero = 1, allOne = 1;
    int isAND = 1, isOR = 1, isXOR = 1, isNAND = 1, isNOR = 1, isXNOR = 1, isNOT = 1;
    
    // Loop through each truth table entry
    for (int i = 0; i < 8; i++) {
        int x = (i & 4) >> 2;  // Extract bit for x
        int y = (i & 2) >> 1;  // Extract bit for y
        int z = (i & 1);       // Extract bit for z
        int f = outputs[i];    // Output for the combination (x, y, z)

        // Check for all zero or all one
        if (f != 0) allZero = 0;
        if (f != 1) allOne = 0;

        // Check common logic functions based on truth table entries
        if (f != (x & y & z)) isAND = 0;
        if (f != (x | y | z)) isOR = 0;
        if (f != (x ^ y ^ z)) isXOR = 0;
        if (f != !(x & y & z)) isNAND = 0;
        if (f != !(x | y | z)) isNOR = 0;
        if (f != !(x ^ y ^ z)) isXNOR = 0;
        if (i == 0 && f != !z) isNOT = 0;  // NOT only applies for one variable (like z)
    }

    // Identify the function based on flags
    printf("Identified function: ");
    if (allZero) {
        printf("F(x, y, z) = 0 (Always False)\n");
    } else if (allOne) {
        printf("F(x, y, z) = 1 (Always True)\n");
    } else if (isAND) {
        printf("F(x, y, z) = x AND y AND z\n");
    } else if (isOR) {
        printf("F(x, y, z) = x OR y OR z\n");
    } else if (isXOR) {
        printf("F(x, y, z) = x XOR y XOR z\n");
    } else if (isNAND) {
        printf("F(x, y, z) = NOT (x AND y AND z)\n");
    } else if (isNOR) {
        printf("F(x, y, z) = NOT (x OR y OR z)\n");
    } else if (isXNOR) {
        printf("F(x, y, z) = NOT (x XOR y XOR z)\n");
    } else if (isNOT) {
        printf("F(x, y, z) = NOT z\n");
    } else {
        printf("Complex or custom function\n");
    }
}

int main() {
    int outputs[8];

    // Input the output values for F(x, y, z)
    printf("Enter the output values for F(x, y, z) for the following truth table:\n");
    printf("x y z | F(x,y,z)\n");
    printf("----------------\n");

    for (int i = 0; i < 8; i++) {
        int x = (i & 4) >> 2;
        int y = (i & 2) >> 1;
        int z = (i & 1);
        printf("%d %d %d | ", x, y, z);
        scanf("%d", &outputs[i]);
    }

    // Identify the function
    identifyFunction(outputs);

    return 0;
}
