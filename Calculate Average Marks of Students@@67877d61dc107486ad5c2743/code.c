#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int roll_num;
    char name[10];
    float marks,Average=0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num,name,&marks);
        Average+=marks/n;
    }    
    printf("Average Marks: %.2f",Average);

    return 0;
}