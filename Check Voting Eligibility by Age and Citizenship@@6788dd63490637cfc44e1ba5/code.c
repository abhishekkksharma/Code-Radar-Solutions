#include <stdio.h>

int welcome(int a,int b) {
    if(a>=18 && b==1){
        return "Eligible";
    }else if(a<18 || b==0 ){
        return "Not eligible";
    }
    return 0;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%s", welcome(x,y));
    return 0;
}