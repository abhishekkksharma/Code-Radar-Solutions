#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char a[],b[];
    scanf("%s",str);
    scanf("%c %c",&a,&b);
    int start=0;
    while(start<=strlen(str)){
        if(str[start]==a){
            str[start]=b;
            start++;
        }
    }
    printf("%s",str);
    return 0;
}