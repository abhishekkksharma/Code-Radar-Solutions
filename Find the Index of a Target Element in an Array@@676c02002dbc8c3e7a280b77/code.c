#include <stdio.h>
int targetcheck(int n, int arr[], int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    printf("%d",targetcheck(n,arr,target));
    return 0;
}