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
        // int max=-10;
        // if(arr[i]==arr[i-1]){
        //     continue;
        // }else{
        for(int j=i+1;j<n;j++){
            int max=-10;
            if(arr[i]+arr[j]==target && max!=arr[j]){
                printf("%d %d\n",arr[i],arr[j]);
                max=arr[j];
                break;
            }
        }
        
    }
    return 0;
}