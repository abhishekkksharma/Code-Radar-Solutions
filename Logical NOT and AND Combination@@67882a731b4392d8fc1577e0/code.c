#include <stdio.h>

int welcome(int a, int b) {
    if(!(a>=0 && b>=0)){
        return "True";
    }else{
        return "False"
    }
    return 0;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%s", welcome(x,y));
    return 0;
}