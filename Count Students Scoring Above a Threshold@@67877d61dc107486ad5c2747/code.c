#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int roll;
    char name[10];
    float marks[n],total,target;;
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll,&name,&marks[i]);

    }
    int count=0;
    scanf("%f",&target);
    for(int i=0;i<n;i++){
        if(marks[i]>target){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d",target,count);
    return 0;
}