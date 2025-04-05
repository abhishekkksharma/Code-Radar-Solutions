#include <stdio.h>
void bubblesort(int roll_num[],char name[],int marks[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(marks[j]>marks[j+1]){
                int tempmarks;
                char tempname[10];
                int temproll;
                tempmarks=marks[j];
                marks[j]=marks[j+1];
                marks[j+1]=tempmarks;

                tempname=name[j];
                name[j]=name[j+1];
                name[j+1]=tempname;

                temproll=roll_num[j];
                roll_num[j]=roll_num[j+1];
                roll_num[j+1]=temproll;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int roll_num[n];
    char name[n][50];
    float marks[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&roll_num[i],name[i],&marks[i]);
    }
    float max_marks = marks[0];
    int x=0;
    for(int i=1;i<n;i++){
        if(marks[i]>max_marks){
            max_marks=marks[i];
            x++;
        }    
    }
    bubblesort(roll_num,name,marks);
    for(int i=0;i<n;i++){
        printf("Roll number: %d, Name: %s, Marks: %.2f\n",roll_num[i],name[i],marks[i]);
    }
    


    return 0;
}
