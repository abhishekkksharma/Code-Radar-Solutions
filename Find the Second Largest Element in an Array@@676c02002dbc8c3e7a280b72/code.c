#include <stdio.h>

int secondlarget(int n,int arr[n]){
    if(n==1){
        return -1;
    }
    if(arr[n-1]<arr[n] ){
        return arr[n-1];
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",secondlarget(n,arr));

    return 0;
}