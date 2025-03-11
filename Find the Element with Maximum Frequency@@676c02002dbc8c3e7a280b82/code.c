#include <stdio.h>

int freq(int n, int arr[]) {
    int max_freq = 0;
    int result = -1; 
    
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > max_freq) {
            max_freq = count;
            result = arr[i];
        }
    }
    
    return result; 
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = freq(n, arr);
    printf("%d", result);

    return 0;
}
