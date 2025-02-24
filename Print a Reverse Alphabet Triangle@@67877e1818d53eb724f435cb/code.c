#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for(int i=rows;i<=rows;i++){
        char ch='A';
        for(int j=1;j<=rows; j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}