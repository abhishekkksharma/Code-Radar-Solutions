#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%c",i*'*');
    }
    return 0;
}