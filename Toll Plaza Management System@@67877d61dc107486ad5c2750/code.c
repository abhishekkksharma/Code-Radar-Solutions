#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char number[n][10];
    char type[n][10];
    int tax[n];
    for(int i=1;i<=n;i++){
        scanf("%s %s %d",number,type,&tax[i]);
        printf("%s %s %d\n",number,type,tax[i]);
    }
    return 0;
}