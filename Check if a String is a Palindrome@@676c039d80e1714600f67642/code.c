#include <stdio.h>
#include <string.h>

int palindrome(char str[]){
    int start=0,end;
    end =strlen(str)-1;
    while(start<end){
        if (str[start]!=str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main(){
    char string[100];
    fgets(string,sizeof(string),stdin)
    if(palindrome(string)){
        printf(Yes);
    }else{
        printf("No");
    }
    return 0;
}