#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=2;i<sqrt(n);i++){
        if(arr[i]!i==0){
            count+=0;
        }else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}