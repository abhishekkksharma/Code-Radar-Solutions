#include <stdio.h>

int welcome(int a, int b) {
    scanf("%d %d",&a, &b);
    return a + b;
}

int main() {
    printf("Sum: %d", welcome());
    return 0;
}