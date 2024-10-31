#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100    // Maximum number of strings
#define MAX_LENGTH 1000    // Maximum length of each string

// Function to swap two strings
void swap(char *str1, char *str2) {
    char temp[MAX_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// Function to sort strings based on their lengths
void sortStringsByLength(char strings[][MAX_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Compare lengths and swap if needed
            if (strlen(strings[i]) > strlen(strings[j])) {
                swap(strings[i], strings[j]);
            }
        }
    }
}

int main() {
    int n;
    char strings[MAX_STRINGS][MAX_LENGTH];

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume the newline after the number input

    // Input each string
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove newline character
    }

    // Sort the strings by length
    sortStringsByLength(strings, n);

    // Output the sorted strings
    printf("\nStrings sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
