#include <stdio.h>

int welcome(int a) {
    if(a==1){
        return "Monday";
    }else if(a==2){
        return "Tuesday";
    }else if(a==3){
        return "Wednesday";
    }else if(a==4){
        return "Thursday";
    }else if(a==5){
        return "Friday";
    }else if(a==6){
        return "Saturday";
    }else if(a==7){
        return "Sunday";
    }else{
        return "Invalid month";
    }
    return  0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%s", welcome(x));
    return 0;
}