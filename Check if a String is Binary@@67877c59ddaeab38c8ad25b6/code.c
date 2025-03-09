#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int n = strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]>1){
            printf("No");
            break;
        }else{
            printf("Yes");
            break;
        }
    }
    return 0;

}