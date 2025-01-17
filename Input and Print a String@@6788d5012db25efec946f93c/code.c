#include <stdio.h>

char* welcome() {
    char str[100];
    scanf("%c",str);
    return str;
}

int main() {
    printf("You entered: %c\n", welcome());
    return 0;
}