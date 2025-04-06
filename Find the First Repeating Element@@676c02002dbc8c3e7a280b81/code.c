#include <stdio.h>
int findrepeating(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i-1;j++){
            if(arr[j]==arr[i]){
                return arr[j];
                break;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",findrepeating(arr,n));
    return 0;

}