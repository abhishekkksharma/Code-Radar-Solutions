#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of elements
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input the elements of the array
    }
    
    int max = -1;  // Start with -1 assuming no even number has been found

    // Iterate through the array to find the maximum even number
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] > max) {  // Check if the number is even and larger than the current max
            max = arr[i];
        }
    }

    // Print the result, which will be the maximum even number or -1 if no even number exists
    printf("%d", max);
    
    return 0;
}
