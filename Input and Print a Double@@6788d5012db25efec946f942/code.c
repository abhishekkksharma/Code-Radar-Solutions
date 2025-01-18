#include <stdio.h>

float welcome() {
    float a;
    scanf("%f",&a);
    if (a==0){
        return 0;
    }
    return a;
}

int main() {
    float x;
    printf("You entered: %.4f", welcome());
    return 0;
}