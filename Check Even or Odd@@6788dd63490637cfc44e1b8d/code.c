#include <stdio.h>

int welcome(int a) {
    if (a%2==0){
        return "Even";
    }
    else{
        return "Odd";
    }
    return 0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%s", welcome(x));
    return 0;
}