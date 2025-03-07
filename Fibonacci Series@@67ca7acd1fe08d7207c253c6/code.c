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

