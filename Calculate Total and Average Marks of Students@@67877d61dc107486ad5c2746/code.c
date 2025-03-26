#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int roll;
    char name[10];
    
    float marks,total,average;;
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll,&name,&marks);
        total+=marks;

    }
    average=total/n;
    printf("Total Marks: %.2f\nAverage Marks: %.2f",total,average );
    return 0;
}
