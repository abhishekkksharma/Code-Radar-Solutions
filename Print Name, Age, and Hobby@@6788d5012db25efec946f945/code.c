#include <stdio.h>

void welcome() {
    char name[100]; int age; char hobby;
    scanf("%s %d %s", &name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
}

void main() {
    welcome();
}