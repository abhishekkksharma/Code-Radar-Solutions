#include <stdio.h>

int main() {
    char day[7][10];
    float temp[7];
    float total=0;
    for(int i=1;i<=7;i++){
        scanf("%s %f",day[i],&temp[i]);
        total+=temp;
    }
    float average=(total/7);
    printf("Average Temperature: %.2f\n",average);
    return 0;
}