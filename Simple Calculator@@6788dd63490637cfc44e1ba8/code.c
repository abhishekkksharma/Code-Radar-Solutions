#include <stdio.h>

int welcome(int a, int b, char c) {
    switch(c){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;      
        default:
            return "error";          
    }

    return 0;
}

int main() {
    int x,y; char q;
    scanf("%d %d %c",&x,&y,&q);
    printf("%d", welcome(x,y,q));
    return 0;
}
