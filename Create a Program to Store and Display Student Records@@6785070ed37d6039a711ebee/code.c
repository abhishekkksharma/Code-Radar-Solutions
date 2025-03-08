#include <stdio.h>
#include <string.h>

struct student{
    int roll_num;
    char name[50];
    float marks;
};
int main() {
    // int n;
    // scanf("%d",&n);
    // for (int i=0;i<n;i++){
    //     char name[10];
    //     int roll_num;
    //     float marks;
    //     scanf("%d %s %f",&roll_num,name,&marks);
    //     printf("Roll Number: %d, Name: %s, Marks: %.2f\n",roll_num,name,marks);
    // }

    int n;
    scanf("%d",&n);
    struct student students[n];
    for(int i=0;i<n;i++){
        scanf("%d",&students[i].roll_num);
        scanf("%s",students[i].name);
        scanf("%f",&students[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].roll_num,students[i].name,students[i].marks);
    }
    return 0;
}