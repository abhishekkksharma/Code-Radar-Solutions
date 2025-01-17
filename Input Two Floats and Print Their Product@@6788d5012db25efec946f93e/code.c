#include <stdio.h>

int welcome(float a, float b) {
    return a * b;
}

int main() {
    float x,y;
    scanf("%f %f",&x,&y);
    printf("Product: %.2f", welcome(x,y));
    return 0;
}