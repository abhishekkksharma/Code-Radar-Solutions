#include <stdio.h>
#include <string.h>

int main(){
    char str[100],temp;
    int start, end;
    scanf("%s",str);
    start = 0;
    end = strlen(str) - 1;
    int count =0;
    while(start<end){
        if(str[start]== ' '){
            count++;
        }
        start++;
        

    }
    printf("%d",count);
    return 0;
}