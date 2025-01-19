#include <stdio.h>

int welcome() {
    int a,b;
    scanf("%d %d",a,b);
    if(a>b){
        return "True";
    }
    else{
        return "False"
    }
    return 0;
}

int main() {
    printf("%s", welcome());
    return 0;
}