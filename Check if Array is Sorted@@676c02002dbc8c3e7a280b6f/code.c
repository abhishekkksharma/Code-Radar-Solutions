#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i <n; i++){
        if(arr[0]<arr[1]){
            printf("Sorted");
            break;
        }else if(arr[0]>arr[1]){
            printf("Not Sorted");
        }
    }
    return 0;
}