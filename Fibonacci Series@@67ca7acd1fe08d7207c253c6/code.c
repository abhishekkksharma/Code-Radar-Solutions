#include <stdio.h>

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
    
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  
    }    
    printf("\n");  

    return 0;
}
