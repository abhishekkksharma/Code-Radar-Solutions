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
        if(arr[i]==arr[i-1]&& arr[i]!=0){
            continue;
        }else{
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
                break;
            }
        }}
        
    }
    return 0;
}