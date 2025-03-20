#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // Read input

    int foundA = 0; // Flag to check if 'a' is found in the string

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'z') {
            foundA = 1; // Mark that 'a' is found
            break; // Exit the loop once we find 'a'
        }
    }

    if (foundA) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
