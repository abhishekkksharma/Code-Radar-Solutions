#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char result[200];
    scanf("%[^\n]s",str1)
    
    strcpy(result, str1);
    strcat(result, str2);
    
    printf("%s", result);
    
    return 0;
}
