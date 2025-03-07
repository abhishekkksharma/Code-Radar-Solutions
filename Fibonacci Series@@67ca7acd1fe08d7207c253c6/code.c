#include <stdio.h>

int fibonacci(int x){
    return x * fibonacci(x-1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",fibonacci(n));
    return 0;
}