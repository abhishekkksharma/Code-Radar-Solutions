#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    // To ensure no duplicate pairs are printed
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Print pair only if it's not already printed
                printf("%d %d\n", arr[i], arr[j]);

                // Skip all further duplicate pairs involving arr[i] or arr[j]
                while (j + 1 < n && arr[j] == arr[j + 1]) {
                    j++; // Skip repeated elements for j
                }
            }
        }
    }

    return 0;
}
