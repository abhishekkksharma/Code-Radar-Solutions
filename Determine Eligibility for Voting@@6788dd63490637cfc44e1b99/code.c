#include <stdio.h>

int welcome(int a) {
    if(a>=18){
        return "Eligible";
    }else{
        return "Not Eligible";
    }
    return 0;
}

int main() {
    int age;
    scanf("%d",&age);
    printf("%s", welcome(age));
    return 0;
}