#include <stdio.h>
#include <string.h>

int main() {
    int x;
    scanf("%d", &x);
    int rev_standard = 0, rev_prem = 0, rev_vip = 0;
    
    for (int i = 0; i < x; i++) {
        char movie_name[10], sub[10];
        int price;
        scanf("%s %s %f", movie_name, sub, &price);
        
        if (strcmp(sub, "Standard") == 0) {
            rev_standard += price;
        } else if (strcmp(sub, "Premium") == 0) {
            rev_prem += price;
        } else if (strcmp(sub, "VIP") == 0) {
            rev_vip += price;
        }
    }
    
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", rev_standard, rev_prem, rev_vip);
    
    return 0;
}
