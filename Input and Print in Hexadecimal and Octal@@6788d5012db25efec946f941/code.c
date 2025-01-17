#include <stdio.h>

void welcome(int num) {
    printf("Hexadecimal: %X\nOctal: %o",num);
}

int main() {
    int a;
    scanf("%d",&a);
    welcome(a);
    return 0;
}