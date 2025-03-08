#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char newstr[100];
    int j = 0;

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Remove spaces and copy characters to newstr
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            newstr[j++] = str[i];  // Copy character and increment j
        }
    }
    newstr[j] = '\0';  // Null-terminate the new string

    // Remove the newline character if it's present
    if (newstr[strlen(newstr) - 1] == '\n') {
        newstr[strlen(newstr) - 1] = '\0';
    }

    // Check if the string is a palindrome
    int start = 0;
    int end = strlen(newstr) - 1;

    while (start < end) {
        if (newstr[start] != newstr[end]) {
            printf("No\n");
            return 0;  // Early exit if not a palindrome
        }
        start++;
        end--;
    }

    printf("Yes\n");  // If no mismatches found, it's a palindrome
    return 0;
}
