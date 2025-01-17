#include <stdio.h>

int welcome(float a, float b) {
    return a+b;
}

int main() {
    float x,y;
    scanf("%f %f",&x,&y);
    printf("%.2f", welcome(x,y));
    return 0;
}