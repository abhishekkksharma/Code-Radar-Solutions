#include <stdio.h>

void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int secondlarget(int arr[],int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            if((arr[j]<arr[i]) && (arr[j]!=arr[i])){
                return arr[j];
            }
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printf("%d",secondlarget(arr,n));

    return 0;
}