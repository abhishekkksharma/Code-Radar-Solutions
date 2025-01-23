#include <stdio.h>

int* welcome(int a) {
    switch (a){
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
        default:
            return 0;
    }
    return 0;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%s", welcome(&x));
    return 0;
}


