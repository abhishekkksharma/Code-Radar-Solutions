#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        if(str!='a');
        printf("Yes");
        break;
    }
    else{
        printf("No");
    }
    return 0;
}