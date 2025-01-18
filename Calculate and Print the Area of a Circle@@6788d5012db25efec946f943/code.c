#include <stdio.h>

float welcome() {
    float radius;
    float pi=3.14;
    scanf("%f",&radius);
    return pi*radius*radius;
}

int main() {
    printf("%.2f", welcome());
    return 0;
}