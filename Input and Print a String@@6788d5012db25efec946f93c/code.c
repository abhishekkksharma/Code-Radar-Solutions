#include <stdio.h>

char* welcome() {
    char str[50];
    scanf("%s",str);
    return str;
}

int main() {
    printf("You entered: %s", welcome());
    return 0;
}