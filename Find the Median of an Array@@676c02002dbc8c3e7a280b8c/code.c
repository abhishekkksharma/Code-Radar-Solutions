#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int left=0, right=n-1;
    int mid=(left+right)/2;
    if(n%2==0){
        printf("%d",(arr[mid]+arr[mid+1])/2);
    }
    else{
        printf("%d",arr[mid]);
    }
    
    return 0;
}