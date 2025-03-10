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
        }else if(arr[i]%2!=0){
            max= -1;
        }
    }
    printf("%d",max);
    return 0;
}