#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int roll_num;
        char name[10];
        float marks;
        scanf("%d %c %f",&roll_num,name,&marks);
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",roll_num,name,marks);
    }
    return 0;
}