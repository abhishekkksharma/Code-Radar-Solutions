#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char number[n][10];
    char type[n][10];
    float tax[n];
    for(int i=1;i<=n;i++){
        scanf("%s %s %f",number,type,&tax);
        printf("%s %s %f",number,type,tax);
    }
    return 0;
}