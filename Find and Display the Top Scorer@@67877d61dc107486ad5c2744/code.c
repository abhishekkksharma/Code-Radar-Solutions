#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int roll_num[n];
    char name[n][10];
    float marks[n];
    for (int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],&name[i],&marks[i]);
    }
    int max=0;
    for(int i=0; i<n;i++){
        if(marks[i]>max){
            max=marks[i];
        }
    }
    printf("Top scorer: Roll number: %d, Name: %s, Marks: %.2f",roll_num[max+1],name,marks[max+1]);
    return 0;
}