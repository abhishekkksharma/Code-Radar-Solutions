#include <stdio.h>

int secondlarget(int n,int arr[n]){
    if(n==1){
        return arr[0];
    }
    else if(arr[n-2]<arr[n-1]){
        return arr[n-2];
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",secondlarget(n,arr));

    return 0;
}