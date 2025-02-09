#include <stdio.h>


int main() {
    int Basic,Standard,Premium;
    char first_name[10];
    char sub[10];
    float rev,rev_basic,rev_stan,rev_prem;
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%s %s %f",&first_name,&sub,&rev);
    }
    for(int i=0;i<n;i++){
        if(sub==Basic){
            Basic++;
            rev_basic+=rev;

        }else if(sub==Standard){
            Standard++;
            rev_stan+= rev;
        }else if(sub==Premium){
            Premium++;
            rev_prem+=rev;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",Basic,rev_basic,Standard,rev_stan,Premium,rev_prem)
    return 0;
}







