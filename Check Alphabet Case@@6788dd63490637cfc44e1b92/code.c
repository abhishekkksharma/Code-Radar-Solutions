#include <stdio.h>

int welcome(char c) {
    (int)c;
    if (c>=97 && c<=122){
        return "Lowercase";
    }else if(c>=65 && c<=90 ){
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