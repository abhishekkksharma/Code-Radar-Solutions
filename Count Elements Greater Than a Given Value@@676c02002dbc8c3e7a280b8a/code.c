#include <stdio.h>
int main(){
    int n,target;
    scanf("%d %d",&n,&target);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    printf("%d",target);
}