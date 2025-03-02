#include <stdio.h>
#include <string.h>

int main(){
    char str[100],temp;
    int start, end;
    scanf("%s",str);
    start = 1;
    end = strlen(str);
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