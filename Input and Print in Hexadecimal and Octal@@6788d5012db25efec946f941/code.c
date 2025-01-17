#include <stdio.h>

int welcome(int num) {
    scanf("%d",&num);
    return num;
}

int main() {
    int a;
    printf("Hexadecimal: %x\nOctal: %o", welcome(a));
    return 0;
}