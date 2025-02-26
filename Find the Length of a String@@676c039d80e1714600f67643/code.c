#include <stdio.h>
#include <string.h>
 
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int count = strlen(str);
    printf("%d",count);
    return 0;
} 