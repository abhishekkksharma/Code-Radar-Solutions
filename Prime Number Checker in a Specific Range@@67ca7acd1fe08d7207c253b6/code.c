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
void printPrimesInRange(int a, int b){
    int count=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)==1){
            printf("%d ",i);
            count++;
        }
        else if(isPrime(i)!=1) {
            printf("");
        }
    }
    if(count=0){
        printf("No prime numbers");
    }

}