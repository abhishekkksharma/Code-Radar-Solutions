#include <stdio.h>

int welcome(int a, int b) {
    scanf("%d %d",&a, &b);
    return a + b;
}

int main() {
    int x,y;
    printf("Sum: %d", welcome(x,y));
    return 0;
}