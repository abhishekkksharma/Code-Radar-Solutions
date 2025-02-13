#include <stdio.h>


int main() {
    int n;
    scanf("%n",&n);
    int roll_num[n];
    char name[n][10];
    float marks[n];
    for (int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],name[i],&marks[i]);
    }
    int max_marks=0,max_name,max_roll;
    for(int i=0; i<n;i++){
        if(roll_num[i]>max_marks){
            max_roll=roll_num[i];
            max_marks=marks[i]

        }
    }
    printf("Top scorer: Roll number: %d, Name: %s, Marks: %.2f",roll_num[max_roll],name[max_name],marks[max_marks]);
    return 0;
}