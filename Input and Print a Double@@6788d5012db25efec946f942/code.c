#include <stdio.h>

float welcome() {
    float a;
    scanf("%f",&a);
    return a;
}

int main() {
    float x;
    printf("%f", welcome());
    return 0;
}