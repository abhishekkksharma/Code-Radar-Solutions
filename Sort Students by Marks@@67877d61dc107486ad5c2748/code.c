#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int roll_num[n];
    char name[n][50];
    float marks[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],name[i],&marks[i]);
    }
    float max_marks=marks[0];
    for(int i=1;i<n;i++){
        if(marks[i]>max_marks){
            max_marks=marks[i];
        }    
    }
    printf("%.2f",max_marks);
    

    return 0;
}
