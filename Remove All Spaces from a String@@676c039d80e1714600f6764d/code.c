#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    // scanf("%s",str); // This does not allow you to take spaces in input
    fgets(str,sizeof(str),stdin);
    getchar();
    for(int i=0;i<strlen(str);i++){
        if(str[i]== ' '){
            continue;
        }else{
            printf("%c",str[i]);
        }
    }
    return 0;
}