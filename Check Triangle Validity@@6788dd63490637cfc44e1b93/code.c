#include <stdio.h>

int welcome(int a, int b, int c) {
    if((c*c)==(a*a)+(b*b)){
        return "Valid";
    }else{
        return "Inalid";
    }
    return 0;
}

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%s", welcome(x,y,z));
    return 0;
}