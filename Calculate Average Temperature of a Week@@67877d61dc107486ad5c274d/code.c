#include <stdio.h>

int main() {
    int n=7;
    char day[n][10];
    float temp[n];
    float total=0;
    for(int i=0;i<n;i++){
        scanf("%s %f",day[i],&temp[i]);
        total+=temp[i];
    }
    float average=(total/7);
    printf("Average Temperature: %.2f\n",average);
    return 0;
}