#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int roll[n];
    char name[n][100];
    float marks[n],total,target;;
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll[i],&name[i],&marks[i]);
        total+=marks;

    }
    // int count=0;
    // scanf("%f",&target);
    // for(int i=0;i<n;i++){
    //     if(marks[i]==target){
    //         count++;
    //     }
    // }
    printf("Count of students scoring above %.2f: ",count);
    return 0;
}