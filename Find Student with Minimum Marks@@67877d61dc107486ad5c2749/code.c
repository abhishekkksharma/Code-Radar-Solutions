#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int roll[n];
    char name[n][100];
    float marks[n],total,target;;
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll[i],&name[i],&marks[i]);
    }
    for(int i=0;i<n;i++){
        if(n>1){
            if(marks[i]<marks[i+1] ){
            printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",roll[i],name[i],marks[i]);
        }
        // }else if(n==1){
        //     printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",roll[0],name[0],marks[0]);
        // }
        
    }
    return 0;
}