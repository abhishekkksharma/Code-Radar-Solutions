#include <stdio.h>

int freq(int n,int arr[]){
    int max=0, count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]);
            return arr[i];
        }
    }    
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",freq(n,arr));
    return 0;
}