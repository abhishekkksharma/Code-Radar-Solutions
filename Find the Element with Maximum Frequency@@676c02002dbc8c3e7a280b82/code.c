#include <stdio.h>

int freq(int n,arr[],int target){
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==target){
                if(max==0){
                    continue;
                }else{
                    count++;
                    max=count;
                }
            }
        }
    }
    return max;

}
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    return 0;
}