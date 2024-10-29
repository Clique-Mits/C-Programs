#include <stdio.h>

#define MAX_LENGTH 1000  // Maximum length of the input string

// Function to replace occurrences of "the" with "a"
void replaceTheWithA(char *str) {
    char result[MAX_LENGTH]; // To store the modified string
    int i = 0, j = 0;

    while (str[i] != '\0') {
        // Check if the current position starts with "the"
        if (str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e') {
            result[j] = 'a'; // Replace "the" with "a"
            j++; // Move to the next position in the result string
            i += 3; // Skip past "the"
        } else {
            // Otherwise, copy the current character to the result string
            result[j] = str[i];
            j++;
            i++;
        }
    }

    result[j] = '\0'; // Null-terminate the new string

    // Copy the result back to the original string
    for (int k = 0; k <= j; k++) {
        str[k] = result[k];
    }
}

int main() {
    char str[MAX_LENGTH];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace occurrences of "the" with "a"
    replaceTheWithA(str);

    // Output the modified string
    printf("Modified string: %s", str);

    return 0;
}
