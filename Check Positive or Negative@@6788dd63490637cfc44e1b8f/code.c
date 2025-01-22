#include <stdio.h>

int welcome(int a) {
    if (a>0){
        return "Positive";
    }
    else if(a<0){
        return "Negative";
    }
    else if (a==0){
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