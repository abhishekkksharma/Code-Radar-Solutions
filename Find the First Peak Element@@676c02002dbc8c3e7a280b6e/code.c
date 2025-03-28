#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        return 1; // Exit if array size is 0 or negative
    }

    int arr[n]; 

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d", max);  // Print only the maximum value
    return 0;
}
