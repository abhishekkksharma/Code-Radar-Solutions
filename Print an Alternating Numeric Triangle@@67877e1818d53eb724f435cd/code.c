#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of rows

    for (int i = 1; i <= n; i++) {
        // If the row number is odd, print only 1's
        if (i % 2 != 0) {
            for (int j = 0; j < i; j++) {
                printf("1");
            }
        }
        // If the row number is even, alternate between 0 and 1
        else {
            for (int j = 0; j < i; j++) {
                if (j % 2 == 0) {
                    printf("0");
                } else {
                    printf("1");
                }
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
