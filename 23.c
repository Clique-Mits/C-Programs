#include <stdio.h>

#define MAX 100  // Maximum number of elements in the set

// Recursive function to find subsets with a given product
void findSubsets(int set[], int n, int target, int subset[], int subsetSize, int index, int product) {
    // Base case: if product matches the target, print the subset
    if (product == target && subsetSize > 0) {
        printf("{ ");
        for (int i = 0; i < subsetSize; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }
    
    // If we've reached the end of the set or product exceeds target, return
    if (index == n || product > target) {
        return;
    }
    
    // Include current element in the subset and recurse
    subset[subsetSize] = set[index];
    findSubsets(set, n, target, subset, subsetSize + 1, index + 1, product * set[index]);
    
    // Exclude current element from the subset and recurse
    findSubsets(set, n, target, subset, subsetSize, index + 1, product);
}

int main() {
    int n, target;
    int set[MAX];
    
    // Input number of elements in the set
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    
    // Input elements of the set
    printf("Enter the elements of the set: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }
    
    // Input the target product
    printf("Enter the target product: ");
    scanf("%d", &target);
    
    int subset[MAX];  // Array to store current subset
    
    printf("Subsets with product equal to %d are:\n", target);
    findSubsets(set, n, target, subset, 0, 0, 1);
    
    return 0;
}
