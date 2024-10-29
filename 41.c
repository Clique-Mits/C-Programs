#include <stdio.h>

#define MAX_LENGTH 1000  // Maximum length of the input string

// Function to reverse a word in place
void reverseWord(char *word, int start, int end) {
    while (start < end) {
        // Swap characters
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse the odd-indexed words in a string
void reverseOddWords(char *str) {
    int i = 0;
    int start = 0;
    int wordCount = 0;

    while (str[i] != '\0') {
        // Check for spaces or end of string to identify words
        if (str[i] == ' ' || str[i + 1] == '\0') {
            if (str[i + 1] == '\0') {
                // If it's the end of the string, include the last character as part of the last word
                i++;
            }

            // Reverse the word if it's an odd-indexed word
            if (wordCount % 2 == 1) {
                reverseWord(str, start, i - 1);
            }

            // Update the starting index for the next word
            start = i + 1;
            wordCount++;
        }
        i++;
    }
}

int main() {
    char str[MAX_LENGTH];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Reverse the odd-indexed words in the string
    reverseOddWords(str);

    // Output the modified string
    printf("Modified string: %s", str);

    return 0;
}
