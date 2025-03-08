#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char newstr[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0; i < strlen(str);i++){
        if(str[i]==' '){
            continue;
        }else{
            newstr[i]=str[i];
        }
    }
    int start=0;
    int end= strlen(newstr);
    for(int i=start;i<end;i++){
        if(newstr[start]==newstr[end]){
            printf("Yes");
            break;
        }else{
            printf("No");
            break;
        }
        start++;
        end--;
    }
}