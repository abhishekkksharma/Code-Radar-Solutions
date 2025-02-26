#include <stdio.h>
#include <string.h>

int main(){
    char str[],temp;
    int start, end;
    scanf("%s",str);
    start = 0;
    end = strlen(str) - 1;
    while(start<end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;

    }
    printf("%s",str);
    return 0;
}