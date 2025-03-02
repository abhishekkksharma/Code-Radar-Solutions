#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    getchar();
    char a;
    scanf("%c",&a);
    int start=0;
    int end= strlen(str)-1;
    int count=0;
    while(start<=end){
        if(str[start]==a){
            count++;
        }
        if(str[end]==a && start!=end){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}