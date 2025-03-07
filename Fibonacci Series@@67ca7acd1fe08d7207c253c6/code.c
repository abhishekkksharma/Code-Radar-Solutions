#include <stdio.h>
int fibonacciSeries(int);
int fibonacciSeries(int x) {
    if (x == 0) {
        return 0; 
    }
    if (x == 1) {
        return 1; 
    }    
    return fibonacciSeries(x - 1) + fibonacciSeries(x - 2); 
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacciSeries(i));  
    }    
    printf("\n");  

    return 0;
}
