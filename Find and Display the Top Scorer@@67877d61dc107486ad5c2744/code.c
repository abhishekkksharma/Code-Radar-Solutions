#include <stdio.h>


int main() {
    int n;
    scanf("%n",&n);
    int roll_num[n];
    char name[n][10];
    float marks[n];
    for (int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],&name[i],&marks[i]);
    }
    int max=0;
    int count=0;
    for(int i=0; i<n;i++){
        if(marks[i]>max){
            max=marks[i];
            count++;
        }
    }
    printf("Top scorer: Roll number: %d, Name: %s, Marks: %.2f",roll_num[count],name,marks[max+1]);
    return 0;
}