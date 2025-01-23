#include <stdio.h>

int welcome(int a) {
    if(a%5==0 && a%3==0){
        return "Divisible by Both";
    }else if(a%5==0){
        return "Divisible by 2";
    }else if(a%3==0){
        return "Divisible by 3";
    }
    return 0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%s", welcome(x));
    return 0;
}