#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char number[n][10];
    char type[n][10];
    int tax[n];
    int car_tax=0,truck_tax=0,bike_tax=0;
    for(int i=1;i<=n;i++){
        scanf("%s %s %d",number[i],type[i],&tax[i]);
        if(type[i]=="Car"){
            car_tax+=tax[i];
        }else if(type[i]=="Truck"){
            truck_tax+=tax[i];
        }else{
            bike_tax+=tax[i];
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",car_tax,truck_tax,bike_tax);

    return 0;
}