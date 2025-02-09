#include <stdio.h>
#include <string.h>

int main() {
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        char movie_name[10],sub[10];
        float price;
        scanf("%s %s %f",movie_name,sub,&price);
    }
    int rev_standard,rev_prem,rev_vip;
    if(strcmp(sub=="Standard")){
        rev_standard+=rev;
    }else if(strcmp(sub=="Premium")){
        rev_prem+=rev;
    }else if(strcmp(sub=="VIP")){
        rev_vip+=rev;
    }
    printf("standard: %.2f, Premium: %.2f, VIP: %.2f",rev_standard,rev_prem,rev_vip);
    return 0;
}


