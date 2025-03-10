#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=-100;
    for(int i=0;i<n;i++){
        if(arr[i]>max && arr[i]%2==0){
            max=arr[i];
        }
    }
    if(max==-100){
        printf("-1");
    }else{
        printf("%d",max);
    }
    
    return 0;
}