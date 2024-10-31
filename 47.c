#include <stdio.h>

#define MAX_LENGTH 1000  // Maximum length of the input string

// Function to check if a character is a valid email character for the local part
int isLocalPartChar(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') || c == '.' || c == '_';
}

// Function to check if a character is a valid domain character
int isDomainChar(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') || c == '.';
}

// Function to check if a string is a valid email address
int isValidEmail(char *str) {
    int i = 0;
    int atCount = 0;
    int dotAfterAt = 0;
    int atPosition = -1;

    // Check for at least one character before '@'
    if (!isLocalPartChar(str[0])) {
        return 0;
    }

    // Traverse the string to validate
    while (str[i] != '\0') {
        if (str[i] == '@') {
            // Ensure only one '@' and at least one character before and after '@'
            if (atCount > 0 || i == 0 || str[i + 1] == '\0') {
                return 0;
            }
            atCount++;
            atPosition = i;
        } else if (atCount == 0) {
            // Check local part characters (before '@')
            if (!isLocalPartChar(str[i])) {
                return 0;
            }
        } else {
            // Check domain part characters (after '@')
            if (!isDomainChar(str[i])) {
                return 0;
            }
            if (str[i] == '.' && i > atPosition + 1) {
                dotAfterAt = 1;
            }
        }
        i++;
    }

    // The email is valid if there is exactly one '@' and at least one dot after '@'
    return (atCount == 1 && dotAfterAt);
}

int main() {
    char email[MAX_LENGTH];

    // Input the email address
    printf("Enter an email address: ");
    fgets(email, sizeof(email), stdin);

    // Remove newline character from fgets input
    int len = 0;
    while (email[len] != '\0') {
        if (email[len] == '\n') {
            email[len] = '\0';
            break;
        }
        len++;
    }

    // Validate the email address
    if (isValidEmail(email)) {
        printf("The email address is valid.\n");
    } else {
        printf("The email address is invalid.\n");
    }

    return 0;
}
