#include <stdio.h>

float welcome() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    return (a+b+c)/3.00;
}

int main() {
    printf("%f", welcome());
    return 0;
}