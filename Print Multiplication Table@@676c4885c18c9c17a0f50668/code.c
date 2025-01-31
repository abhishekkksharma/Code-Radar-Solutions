#include <stdio.h>

int main() {
    int n;
    int arr[];
    for(int i=1; i<10;i++){
        arr[i]= n*(i+1);
    }
    for(int i=0; i<10;i++){
        printf("%d x %d = %d",n,arr[i]);
    }
    return 0;
}