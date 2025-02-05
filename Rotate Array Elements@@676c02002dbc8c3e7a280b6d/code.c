#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i < n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i+=k){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}