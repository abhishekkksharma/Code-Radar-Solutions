#include <stdio.h>

char* welcome() {
    int a;
    scanf("%d",&a);
    return a;
}

int main() {
    printf("%d", welcome());
    return 0;
}