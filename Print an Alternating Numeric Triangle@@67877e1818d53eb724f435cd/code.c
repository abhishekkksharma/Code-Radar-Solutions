#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < i; j++) {
                if (j % 2 == 0) {
                    printf("1 ");
                } else {
                    printf("0 ");
                }
            }
        } else {
            for (int j = 0; j < i; j++) {
                if (j % 2 == 0) {
                    printf("0 ");
                } else {
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
