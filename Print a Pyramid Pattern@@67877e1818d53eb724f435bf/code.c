#include <stdio.h>

int main() {
    int i,j,space,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(space=1;space<=row-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j+=2){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}