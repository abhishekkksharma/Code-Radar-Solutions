#include <stdio.h>

// Function prototype for fibonacci
int fibonacci(int x);

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  // Call the fibonacci function
    }
    printf("\n");  

    return 0;
}

// Function definition for fibonacci
int fibonacci(int x) {
    if (x == 0) {
        return 0; 
    }
    if (x == 1) {
        return 1; 
    }    
    return fibonacci(x - 1) + fibonacci(x - 2); 
}
