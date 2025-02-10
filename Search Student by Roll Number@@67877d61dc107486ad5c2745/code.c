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

    int found = 0;

    for(int i = 0; i < n; i++) {
        if(roll_num[i] == target) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", roll_num[i], name[i], marks[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}
