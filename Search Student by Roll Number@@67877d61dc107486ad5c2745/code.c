#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int roll_num[n];
    char name[n][100];
    float marks,Average=0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],name,&marks);
        scanf("%d",&target);
        for(int i=0;i<n;i++){
            if(target==roll_num[i]){
                printf("Roll number: %d, Name: %s, Marks: %.2f",roll_num[i],name[i],marks);
            } 

    }}
    return 0;
}