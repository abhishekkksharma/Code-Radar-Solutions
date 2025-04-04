#include <stdio.h>

int checkmonotonic(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1] || arr[i]>=arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(checkmonotonic(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}