#include <stdio.h>

int welcome(char c) {
    int x= int(c);
    if (x>=97 && x<=122){
        return "Lowercase";
    }else if(x>=65 && x<=90 ){
        return "Uppercase";
    }
    return 0;
}

int main() {
    char b;
    scanf("%c",&b);
    printf("%s", welcome(b));
    return 0;
}