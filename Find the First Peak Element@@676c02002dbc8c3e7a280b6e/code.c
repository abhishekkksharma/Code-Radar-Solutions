#include <stdio.h>
int max(int n, int arr[n]){
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i+1] >= 2*arr[i]) {
            return arr[i+1];
        }
    }
    return 0;

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