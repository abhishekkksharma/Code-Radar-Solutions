#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        int x=0;
        for(int j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                x++;
                printf("%c: %d\n",str[i],x);
            }
        }
    }
    return 0;
}