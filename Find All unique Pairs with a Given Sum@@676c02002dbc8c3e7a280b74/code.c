#include <stdio.h>
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        int max=0;
        if(arr[i]==max){
            continue;
        }else{
            
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
                break;
                int max=arr[i];
            }
        }
        }
    }
    return 0;
}