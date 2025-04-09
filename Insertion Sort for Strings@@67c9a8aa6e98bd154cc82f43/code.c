void insertionSort(char arr[][100], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && strcmp(arr[j - 1], arr[j]) > 0; j--) {
            char temp[100];
            strcpy(temp, arr[j - 1]);
            strcpy(arr[j - 1], arr[j]);
            strcpy(arr[j], temp);
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}