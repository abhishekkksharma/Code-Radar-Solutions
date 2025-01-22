#include <stdio.h>

int welcome(int a) {
    if (a>=90){
        return "A";
    }else if(a>=80 && a<90){
        return "B";
    }else if(a>=70 && a<80){
        return "C";
    }else if(a>=60 && a<70){
        return "D";
    }else{
        return "F";
    }
    return 0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%c", welcome());
    return 0;
}