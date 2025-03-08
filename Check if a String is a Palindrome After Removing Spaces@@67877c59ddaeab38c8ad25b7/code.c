#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char newstr[100];
    int j=0;
    if(str==''){
        printf("Yes");
    }
    fgets(str,sizeof(str),stdin);
    for(int i=0; i < strlen(str);i++){
        if(str[i]!=' '){
            newstr[j++]=str[i];
        }
    }
    newstr[j]='\0';
    int start=0;
    int end= strlen(newstr)-1;
    for(int i=start;i<end;i++){
        if(newstr[start]==newstr[end]){
            printf("Yes");
            break;
        }
        else{
            printf("No");
            break;
        }
        start++;
        end--;
    }
}