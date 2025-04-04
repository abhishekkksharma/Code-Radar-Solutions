#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n; // Handle if k >= n

    // Print from k to end
    for (int i = k; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Print from 0 to k-1
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
