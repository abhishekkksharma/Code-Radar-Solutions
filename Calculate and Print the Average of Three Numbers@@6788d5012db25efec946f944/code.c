#include <stdio.h>

float welcome() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    return (a+b+c)/3.00;
}

int main() {
    printf("Average: %.2f", welcome());
    return 0;
}