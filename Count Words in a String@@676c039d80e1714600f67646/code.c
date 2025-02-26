#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int start, end;
    scanf("%[^\n]", str);  

    start = 0;
    end = strlen(str);
    int count = 0;
    int in_word = 0;

    while(start < end){
        if(str[start] != ' ' && !in_word){
            count++;
            in_word = 1;
        }
        if(str[start] == ' '){
            in_word = 0;
        }
        start++;
    }

    printf("%d", count);
    return 0;
}
