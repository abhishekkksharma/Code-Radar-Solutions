#include <stdio.h>

char* welcome() {
    char str[100];
    scanf("%99s",str);
    return str;
}

int main() {
    printf("You entered: %s", welcome());
    return 0;
}