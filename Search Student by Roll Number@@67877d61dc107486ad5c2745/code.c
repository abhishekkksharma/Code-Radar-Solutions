#include <stdio.h>

int main() {
    int n, target;

    scanf("%d", &n);
    
    int roll_num[n];
    char name[n][10];
    float marks[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %s %f", &roll_num[i], name[i], &marks[i]);
    }

    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(target == roll_num[i]) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", roll_num[i], name[i], marks[i]);
        }else{
            printf("Student not found");
        }
    }

    return 0;
}
