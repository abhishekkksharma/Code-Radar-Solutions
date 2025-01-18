#include <stdio.h>

float welcome() {
    float a;
    scanf("%f",&a);
    return a;
}

int main() {
    float x;
    printf("%.4f", welcome());
    return 0;
}