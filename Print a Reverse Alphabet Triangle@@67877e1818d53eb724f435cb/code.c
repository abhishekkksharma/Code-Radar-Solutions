#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        char ch='A';
        for(int j=1;j<=rows; j++){
            printf("%c ",ch);
            rows--;
            ch++;
        }
        printf("\n");
    }
}