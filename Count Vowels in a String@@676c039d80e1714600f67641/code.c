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
        if(str[start]== 'A' || str[start]=='E' || str[start]=='I' || str[start]=='O' || str[start]=='U' || str[start]== 'a' || str[start]=='e' || str[start]=='i' || str[start]=='o' || str[start]=='u' ){
            count++;
        }
        start++;
        

    }
    printf("%d",count);
    return 0;
}