#include <stdio.h>

int welcome(int a, int b) {
    if (a=b){
        return "False";
    }else{
        return "True";
    }
    return 0;
}

int main() {
    int x,y;
    scanf("%d %d", &x,&y);
    printf("%s", welcome(x,y));
    return 0;
}