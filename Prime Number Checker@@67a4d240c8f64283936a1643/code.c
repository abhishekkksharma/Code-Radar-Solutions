#include <stdio.h>

// Function to check if a number is prime
int welcome(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime if divisible by i
        }
    }
    return 1; // Prime number
}

int main() {
    int a;
    scanf("%d", &a);  // Read the number of test cases
    int arr[a];  // Array to store the test numbers
    
    // Read each number to be checked for primality
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    // For each number, check if it's prime and print the result
    for (int i = 0; i < a; i++) {
        if (welcome(arr[i]) == 1) {
            printf("1\n"); // Prime number
        } else {
            printf("0\n"); // Not prime number
        }
    }

    return 0;
}
