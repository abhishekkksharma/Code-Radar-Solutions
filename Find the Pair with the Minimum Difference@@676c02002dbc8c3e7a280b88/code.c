#include <stdio.h>
int bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void mindiff(int arr[],int n){
    int minimumdiff = 99999;
    int pair1=0 , pair2=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff= arr[i]-arr[j];
            if (diff<0) {
                diff = -diff;
            }
            if(diff < minimumdiff){
                minimumdiff=diff;
                pair1=arr[i];
                pair2=arr[j];
            }
        }
    }
    printf("%d %d",pair1,pair2);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    mindiff(arr,n);
    return 0;
}