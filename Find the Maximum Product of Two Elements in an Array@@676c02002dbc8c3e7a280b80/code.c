#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result= arr[n-1]*arr[n-2];
    if(result<0) result=-result;
    printf("%d",result);
    return 0;

}