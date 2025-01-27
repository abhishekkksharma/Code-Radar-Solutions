#include <stdio.h>

int welcome(char c) {
    if(c=='R'|| c=='r'){
        return "Stop";
    }
    else if(c=='G' || c=='g'){
        return "Go";
    } 
    else if(c=='Y' || c=='y'){
        return "Slow Down";
    }else {
        return "Invalid input";
    }
    return 0;
}

int main() {
    char x;
    scanf("%c",&x);
    printf("%s", welcome(x));
    return 0;
}