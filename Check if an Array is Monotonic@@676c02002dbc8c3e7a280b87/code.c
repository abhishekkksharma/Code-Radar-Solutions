#include <stdio.h>

int checkmonotonic(int arr[], int n) {
    int inc = 1, dec = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            inc = 0;
        if (arr[i] < arr[i + 1])
            dec = 0;
    }
    return (inc || dec);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(checkmonotonic(arr, n)) {
        printf("YES");
    } else {
        printf("NO");
    }
}
