#include <stdio.h>

int welcome(int a) {
    if (a<0){
        return "Negative";

    }else if(a>0){
        return "Positive";
    }
    else{
        return "Zero";
    }
    return 0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%s", welcome(x));
    return 0;
}