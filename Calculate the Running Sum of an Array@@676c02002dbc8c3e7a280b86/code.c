#include <stdio.h>
int runningsum(int arr[],int n){
    for(int 1=0;i<n;i++){
        return arr[i]+ runningsum[i-1];
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",runningsum([arr[i],i]));
    }
    return 0;
}