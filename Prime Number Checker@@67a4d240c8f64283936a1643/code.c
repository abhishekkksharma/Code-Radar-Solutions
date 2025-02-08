#include <stdio.h>

int welcome(int arr[]) {
    if(arr[]<=1){
        return 0;
    }
    for(int i=2;i*i<arr[];i++){
        if(arr[i]%i==0){
            return 0;
        }
    }

    return 1;
}

int main() {
        int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(welcome(arr[i]==0)){
            printf("1");
        }else{
            printf("0");
        }
    }
    return 0;
}