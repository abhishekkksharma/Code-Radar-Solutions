#incliude <string.h>

void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) { // Compare strings
                minIndex = j;
            }
        }
        // Swap strings using a temporary buffer
        char temp[100];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[minIndex]);
        strcpy(arr[minIndex], temp);
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]); // Print each string on a new line
    }
}
