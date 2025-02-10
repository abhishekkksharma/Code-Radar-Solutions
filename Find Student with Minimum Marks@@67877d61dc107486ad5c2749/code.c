#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int roll[n];
    char name[n][100];
    float marks[n], minMarks;
    int minIndex = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d %s %f", &roll[i], name[i], &marks[i]);
    }

    minMarks = marks[0];

    for(int i = 1; i < n; i++) {
        if(marks[i] < minMarks) {
            minMarks = marks[i];
            minIndex = i;
        }
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", roll[minIndex], name[minIndex], marks[minIndex]);

    return 0;
}
