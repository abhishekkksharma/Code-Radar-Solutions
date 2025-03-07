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
int printPrimeInRange(int a, int b){
    for(int i=a;i<b;i++){
        if(isPrime(i)==1){
            printf("%d",i);
        }
    }
    return 0;
}