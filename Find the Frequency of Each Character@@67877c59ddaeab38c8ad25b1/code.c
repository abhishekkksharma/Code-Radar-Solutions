#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(str);i++){
            if(str[i]==str[j]){
                int x=0;
                printf("%c: %d",str[i],x);
            }
        }
    }
    return 0;
}