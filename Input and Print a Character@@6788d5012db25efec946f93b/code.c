#include <stdio.h>

char* welcome() {
    char a;
    scanf("%s",&a);
    return a;
}

int main() {
    printf("%s", welcome());
    return 0;
}