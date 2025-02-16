#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        printf("%d",i);
        for(int j = 1; j <= rows; j++) {
            printf("%d",i);
        }
        printf("\n");

        
    }
    return 0;
}
