#include <stdio.h>

int welcome(int num) {
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
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
        if(welcome(arr[i]==1)){
            printf("1");
        }else{
            printf("0");
        }
    }
    return 0;
}