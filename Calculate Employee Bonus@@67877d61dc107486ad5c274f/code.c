#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int id[n];
    char name[n][10];
    float sallary[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&id[i],&name[i],&sallary[i]);
    }
    for(int i=0;i<n;i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f",id[i],Name[i],(10/100)*sallary[i]);
    }
    return 0;
}
