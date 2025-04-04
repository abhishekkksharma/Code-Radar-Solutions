#include <stdio.h>
int max(int n, int arr[n]){
    int max = arr[0];
    if (arr[n-1] >= arr[n-2]) return arr[n-1];
    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i-1] && arr[i] <= arr[i+1]) {
            return arr[i];
            break;
        }
    }
    return -1;

}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", max(n,arr));
    return 0;
}