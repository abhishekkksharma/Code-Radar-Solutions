#include <stdio.h>

int main() {
    int i,j,space,row;
    scanf("%d",&row);
    for(int i=0;i<row;i++){
        for(space=0;space<row;space++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}