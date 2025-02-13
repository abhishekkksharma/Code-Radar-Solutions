#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int roll_num[n];
    char name[n][10];
    float marks[n];
    for (int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],name[i],&marks[i]);
    }
    int top_index = 0;
    for(int i=0; i<n;i++){
        if(marks[i]>marks[top_index]){
            top_index = i;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",roll_num[top_index],name[top_index],marks[top_index]);
    return 0;
}