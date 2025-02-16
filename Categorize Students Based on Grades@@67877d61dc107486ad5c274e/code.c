#include <stdio.h>
int grade(float a){
    if(a>=85){
        return 'A';
    }else if(a>=70 and a<85){
        return 'B';
    }else{
        return 'C';
    }
    return 0;

}
int main(){
    int n;
    scanf("%d",&n);
    int roll_num[n];
    char name[n][10];
    float marks[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],name[i],&marks[i]);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Grade: %s",roll_num[i],name[i],grade(marks[i]));
    }
    return 0;
}