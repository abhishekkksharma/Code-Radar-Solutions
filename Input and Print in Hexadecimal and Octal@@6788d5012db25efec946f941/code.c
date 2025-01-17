#include <stdio.h>

void welcome(int num) {
    printf("Hexadecimal: %X\nOctal: %o\n",num);
}

int main() {
    int a;
    scanf("%d",&a);
    welcome(a);
    return 0;
}