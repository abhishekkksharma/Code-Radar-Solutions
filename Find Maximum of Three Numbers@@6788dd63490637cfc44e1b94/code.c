#include <stdio.h>

int welcome(int a,int b,int c) {
    if (a>b && a>c){
        return a;
    }else if (b>a && b>c){
        return b;
    }else if(c>a && c>b){
        return c;
    }else{
        return a;
    }
    return 0;
}

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d", welcome(x,y,z));
    return 0;
}