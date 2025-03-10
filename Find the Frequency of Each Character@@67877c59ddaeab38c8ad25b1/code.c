#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int x=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                x++;
                printf("%c: %d\n",str[i],x);
            }
        }
    }
    return 0;
}