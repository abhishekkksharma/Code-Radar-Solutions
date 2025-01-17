#include <stdio.h>

int welcome(int num) {
    scanf("%d",num);
    return num;
}

int main() {
    printf("Hexadecimal: %x\nOctal: %o", welcome());
    return 0;
}