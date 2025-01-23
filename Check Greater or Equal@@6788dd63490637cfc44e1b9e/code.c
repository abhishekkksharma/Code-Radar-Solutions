#include <stdio.h>

int welcome(int a, int b) {
    if(a>b){
        return "Yes";
    }else{
        return "No";
    }
    return 0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%s", welcome(x));
    return 0;
}