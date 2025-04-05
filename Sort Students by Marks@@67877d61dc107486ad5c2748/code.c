#include <stdio.h>
#include <string.h> 

void bubblesort(int roll_num[], char name[][50], float marks[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(marks[j]>marks[j+1]){

                float tempmarks=marks[j];
                marks[j]=marks[j+1];
                marks[j+1]=tempmarks;

                char tempname[50];
                strcpy(tempname, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], tempname);

                int temproll=roll_num[j];
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
    bubblesort(roll_num,name,marks,n);
    for(int i=0;i<n;i++){
        printf("Roll number: %d, Name: %s, Marks: %.2f\n",roll_num[i],name[i],marks[i]);
    }
    


    return 0;
}
