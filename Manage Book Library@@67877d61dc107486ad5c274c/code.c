#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char book_name[n][10], book_auth[n][10];
    float price[n];
    for (int i=1;i<=n;i++){
        scanf("%s %s %f",book_name[i],book_auth[i],&price[i]);
    } 
    int target;
    scanf("%d",&target);
    for(int i=1;i<=n;i++){
        if(price[i]>target){
            printf("Title: %s, Author: %s, Price: %.2f",book_name[i],book_auth[i],price[i]);
        }
    }

}