#include <stdio.h>

int welcome(int a) {
    if(a>=1 && a<=100){
        return "In Range";
    }else{
        return "Out of Range";
    }
    return 0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%s", welcome(x));
    return 0;
}