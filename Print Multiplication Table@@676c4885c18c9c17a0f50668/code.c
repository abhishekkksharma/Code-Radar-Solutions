#include <stdio.h>

int main() {
    int n;
    int arr[10];
    scanf("%d",&n);
    for(int i=1; i<10;i++){
        arr[i]= n*(i+1);
    }
    for(int i=1; i<10;i++){
        printf("%d x %d = %d\n",n,i,arr[i]);
    }
    return 0;
}