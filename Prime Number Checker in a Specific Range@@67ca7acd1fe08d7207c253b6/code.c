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
void printPrimeInRange(int a, int b){
    for(int i=a;i<b;i++){
        int y= isPrime(i);
        if(y==1){
            printf("%d ",i);
        }
        else {
            printf("");
        }
    }
}