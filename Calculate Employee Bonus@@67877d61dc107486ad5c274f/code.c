#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int id[n];
    char name[n][10];
    float sallary[n];
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&id[i],name[i],&sallary[i]);
    }
    for(int i=0;i<n;i++){
        if(sallary[i]<50000){
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",id[i],name[i],(10.00/100)*sallary[i]);
        }else{
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",id[i],name[i],(5.00/100)*sallary[i]);
        }
    }
    return 0;
}
