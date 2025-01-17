#include <stdio.h>

char* welcome() {
    char str[100];
    scanf("%s",str);
    return str;
}

int main() {
    char str1[100];
    printf("You entered: %s\n", welcome(&str1));
    return 0;
}