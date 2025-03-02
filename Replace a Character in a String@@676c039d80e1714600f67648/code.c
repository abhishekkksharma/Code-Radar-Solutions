#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char a,b;
    scanf("%s",str);
    getchar();
    scanf("%c %c",&a,&b);
    int start=0;
    int end =strlen(str)-1;
    while(start<=end){
        if(str[start]==a){
            str[start]=b;
        }
        start++;

        // if(str(end)==a){
        //     str[end]=b;
        // }
        // end--;
    }
    printf("%s",str);
    return 0;
}