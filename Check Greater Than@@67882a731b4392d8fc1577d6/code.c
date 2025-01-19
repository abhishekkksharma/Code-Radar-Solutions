#include <stdio.h>

int welcome(int a, int b) {
    scanf("%d %d",&a,&b);
    if(a>b){
        return "True";
    }
    else{
        return "False";
    }
    return 0;
}

int main() {
    int x,y;
    printf("%s", welcome(x,y));
    return 0;
}