#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    char number[n][10];
    char type[n][10];
    int tax[n];
    float car_tax=0,truck_tax=0,bike_tax=0;
    for(int i=1;i<=n;i++){
        scanf("%s %s %d",number[i],type[i],&tax[i]);
    }
    for(int i=1;i<=n;i++){
        if(strcmp(type[i], "Car") == 0) {
            car_tax += tax[i];
        } else if(strcmp(type[i], "Truck") == 0) {
            truck_tax += tax[i];
        } else if(strcmp(type[i], "Bike") == 0) {
            bike_tax += tax[i];
        }

    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",car_tax,truck_tax,bike_tax);

    return 0;
}