#include <stdio.h>

int welcome(int a) {
    switch (a){
        case 1:
        return "Monday";
        case 2:
        return "Tuesday";
        case 3:
        return "Wednesday";
        case 4:
        return "Friday";
        case 5:
        return "Saturday";
        case 6:
        return "Sunday"
    }
    return 0;
}

int main() {
    int x9;
    scanf("%d",&x);
    printf("%s", welcome(x));
    return 0;
}


