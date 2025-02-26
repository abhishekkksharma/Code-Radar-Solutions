#include <stdio.h>
#include <string.h>
 
int main(){
    char str[100];
    scanf("%s[^\n]",str);
    int count = strlen(str);
    printf("%d",count);
    return 0;
} 