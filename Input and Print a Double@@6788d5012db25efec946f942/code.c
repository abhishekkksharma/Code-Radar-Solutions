#include <stdio.h>

double welcome() {
    double a;
    scanf("%lf",&a);
    return a;
}

int main() {
    printf("You entered: %.4lf", welcome());
    return 0;
}