#include <stdio.h>

int welcome(int a, int b) {
    if (a>b){
        return a;
    }else{
        return b;
    }
    return 0;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d", welcome(x,y));
    return 0;
}