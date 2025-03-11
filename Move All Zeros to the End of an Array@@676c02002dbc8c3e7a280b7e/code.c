#include <stdio.h>
int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            count++;
        }else{
            printf("%d ",arr[i]);
        }
    }
    while(count>0){
        printf("0 ",);
    }
}