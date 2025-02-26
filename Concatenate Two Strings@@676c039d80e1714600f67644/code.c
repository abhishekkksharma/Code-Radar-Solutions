#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int result= strcmp(str1,str2);
    printf("%s", result);
    return 0;
}
