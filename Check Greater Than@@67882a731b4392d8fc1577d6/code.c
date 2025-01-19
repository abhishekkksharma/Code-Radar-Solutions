#include <stdio.h>

void welcome() {
    int a,b;
    scanf("%d %d",a,b);
    if(a>b){
        printf("True");
    }
    else{
        printf("False");
    }
}

int main() {
    printf("%s", welcome());
    return 0;
}