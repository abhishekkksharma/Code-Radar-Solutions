int fibonacci(int x) {
    if (x == 0) {
        return 0; 
    }
    if (x == 1) {
        return 1; 
    }
    return fibonacci(x - 1) + fibonacci(x - 2); 
}

void fibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
