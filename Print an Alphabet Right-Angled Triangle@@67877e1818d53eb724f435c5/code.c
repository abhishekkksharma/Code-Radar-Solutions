#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}
