#include <stdio.h>

int fibonacci(int);

void fibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    fibonacciSeries(n);

    return 0;
}

int fibonacci(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
}
