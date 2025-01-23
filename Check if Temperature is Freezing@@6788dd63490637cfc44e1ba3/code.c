#include <stdio.h>

int welcome(int a) {
    if(a<=0){
        return "Freezing";
    }else{
        return "Above Freezing";
    }
    return 0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%s", welcome(x));
    return 0;
}