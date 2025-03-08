#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int x= strlen(str);
    for(int i=0;i<x;i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]==' ' ){
            printf("%c",str);
        }
    }
}