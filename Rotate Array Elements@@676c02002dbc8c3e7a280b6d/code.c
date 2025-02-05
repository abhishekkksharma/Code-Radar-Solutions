#include <stdio.h>

int main() {
    int arr[],n,k;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i < n/2;i+=k){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}