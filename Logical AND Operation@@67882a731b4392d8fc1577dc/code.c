#include <stdio.h>

char* welcome(int a,int b) {
    if(a>o && b>0){
        return "True";
    }else{
        return "False";
    }
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%s", welcome(x,y));
    return 0;
}