#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for(int i=rows;i<=1;i++){
        char ch='A';
        for(int j=i;j<=1; j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}