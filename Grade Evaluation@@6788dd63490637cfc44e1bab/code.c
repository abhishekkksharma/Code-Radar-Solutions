#include <stdio.h>

int welcome(char c) {
    if(c=='A'){
        return "Excellent";
    }else if(c=='B'){
        return "Good";
    }else if(c=='C'){
        return "Average";
    }else if(c=='D'){
        return "Below Average";
    }else if(c=='F'){
        return "Fail";
    }else{
        return "Invalid grade";
    }
    return 0;
}

int main() {
    char x;
    scanf("%c",&x);
    printf("%s", welcome(x));
    return 0;
}