#include <stdio.h>
#include <string.h>

int main() {
    int Basic = 0, Standard = 0, Premium = 0;
    float rev_basic = 0, rev_stan = 0, rev_prem = 0;
    int x;
    
    scanf("%d", &x);

    for(int i = 0; i < x; i++) {
        char first_name[10], sub[10];
        float rev;
        
        scanf("%s %s %f", first_name, sub, &rev);
        
        if (strcmp(sub, "Basic") == 0) {
            Basic++;
            rev_basic += rev;
        } else if (strcmp(sub, "Standard") == 0) {
            Standard++;
            rev_stan += rev;
        } else if (strcmp(sub, "Premium") == 0) {
            Premium++;
            rev_prem += rev;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f\n", 
           Basic, rev_basic, Standard, rev_stan, Premium, rev_prem);

    return 0;
}
