#include <stdio.h>

double welcome() {
    double a;
    scanf("%f",&a);
    if (a==0){
        return 0;
    }
    return a;
}

int main() {
    printf("You entered: %.4f", welcome());
    return 0;
}