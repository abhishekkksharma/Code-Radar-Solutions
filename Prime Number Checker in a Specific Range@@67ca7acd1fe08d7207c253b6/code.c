
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printPrimeInRange(int a, int b) {
    int foundPrime = 0;
    for (int i = a; i < b; i++) {
        if (isPrime(i)) {
            if (foundPrime) {
                printf(" ");
            }
            printf("%d", i);
            foundPrime = 1;
        }
    }
    if (!foundPrime) {
        printf("No primes found in the given range.");
    }
    printf("\n");
}