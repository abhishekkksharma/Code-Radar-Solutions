#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",fibonacci(n));
    return 0;
}
int fibonacci(int x){
    return x * fibonacci(x-1);
}

