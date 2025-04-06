#include <stdio.h>
int bubblesort(int arr[],int n){
    for(int i=0 ;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // bubblesort(arr,n);
    int result= arr[n-1]*arr[n-2];
    if(result<0) result=-result;
    printf("%d",result);
    return 0;

}