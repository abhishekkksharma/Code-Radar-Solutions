#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char ch;
    scanf("%s",str);
    getchar();
    scanf("%c",&ch);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u'){
            str[i]=ch;
        }
    }
    for(int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
    }
    return 0;

}