#include <stdio.h>

int secondlarget(int n,int arr[n]){
    if(n<2){
        return -1;
    }
    if(arr[n-1]<arr[n] ){
        return arr[n-1];
    }
    return -1;
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printf("%d",secondlarget(n,arr));

    return 0;
}