#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // Flag to check if any swapping happened
        int swapped = 0;
        
        for (int j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        // If no two elements were swapped in the inner loop, break
        if (swapped == 0)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// int main() {
//     int n;
    
//     // Take input for the size of the array
//     scanf("%d", &n);
    
//     int arr[n];

//     // Take input for the array elements
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Display the original array
//     printArray(arr, n);

//     // Perform bubble sort
//     bubbleSort(arr, n);

//     // Display the sorted array
//     printArray(arr, n);

//     return 0;
// }
