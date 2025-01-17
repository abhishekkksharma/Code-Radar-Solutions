#include <stdio.h>

char* welcome() {
    char str[100];
    scanf("%s",str);
    return str;
}

int main() {
    printf("You entered: %s\n", welcome());
    return 0;
}