#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int roll_num[n], name[n][10],marks[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num,name,&marks);
    }
    int max_marks=0;
    for(int i=0;i<n;i++){
        if(marks[i]>max_marks){
            max_marks=marks[i];
            printf("jdhbc %f",max_marks);
        }
        
    }
    printf("Hello, d!\n");
    return 0;
}
