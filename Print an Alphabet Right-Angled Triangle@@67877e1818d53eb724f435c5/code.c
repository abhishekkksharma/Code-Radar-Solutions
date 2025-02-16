#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=1;i<=rows;i++){
        printf("%c",i+64);
    }
    return 0;
}
