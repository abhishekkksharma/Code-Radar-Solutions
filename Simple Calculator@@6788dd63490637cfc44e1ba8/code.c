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
            if (b == 0) {
                return -1;
            } else {
                return a / b;
            }     
        default:
            return "Error";          
    }

    return 0;
}

int main() {
    int x,y; char q;
    scanf("%d %d %c",&x,&y,&q);
    int result= welcome(x,y,q);
    if (result==-1){
        printf("error");
    }else{
    printf("%d", result);
    }
    return 0;
}
