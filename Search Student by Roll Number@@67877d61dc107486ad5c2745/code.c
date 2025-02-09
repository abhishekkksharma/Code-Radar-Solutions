#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Number of students

    int roll_num[n];  // Array to store roll numbers
    char name[50];  // Array to store names (increased size)
    float marks[n];  // Array to store marks

    // Input student data
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &roll_num[i], name, &marks[i]);
    }

    // Input target roll number to search
    int target;
    scanf("%d", &target);

    // Search for the student with the target roll number
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (roll_num[i] == target) {
            printf("Roll number: %d, Name: %s, Marks: %.2f\n", roll_num[i], name, marks[i]);
            found = 1;
            break;
        }
    }

    // If the student is not found
    if (!found) {
        printf("No student found with roll number %d\n", target);
    }

    return 0;
}
