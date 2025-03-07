#include <stdio.h>

int fibonacci(int);
int fibonacci(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
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

