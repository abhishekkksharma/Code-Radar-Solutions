#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);
    
    // To avoid duplicates, we'll track pairs we have already printed.
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // j starts from i+1 to avoid checking the same element
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
    
    return 0;
}
