#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int roll_num[n], name[n][10],marks[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],name[i],&marks[i]);
    }
    for(int i=0;i<n;i++){
        if(marks[i]>50.00){
            printf("All Passed");
        }else{
            printf("Not All Passed");
            break;
        }
    }
    return 0;
}
