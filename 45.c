#include <stdio.h>

#define MAX_LENGTH 1000  // Maximum length of the input string

// Function to print the length of each word in a string
void printWordLengths(char *str) {
    int length = 0;  // Length of the current word
    int i = 0;       // Index for traversing the string

    while (str[i] != '\0') {
        // Check if the current character is a space or the end of the string
        if (str[i] == ' ' || str[i + 1] == '\0') {
            // If it's the end of the string and not a space, count the last character
            if (str[i + 1] == '\0' && str[i] != ' ') {
                length++;
            }

            // Print the length of the current word
            if (length > 0) {
                printf("Length of word: %d\n", length);
            }

            length = 0;  // Reset length for the next word
        } else {
            length++;  // Increase length for each character in the word
        }
        i++;  // Move to the next character
    }
}

int main() {
    char str[MAX_LENGTH];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read the input string

    // Print the length of each word in the string
    printWordLengths(str);

    return 0;
}
