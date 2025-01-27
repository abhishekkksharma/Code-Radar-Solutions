#include <stdio.h>

int main() {
    int x;
    int a=31,b=30,c=28;
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("%d",a);
            break;
        case 2:
            printf("%d",c); 
            break;
        case 3:
            printf("%d",a);
            break;
        case 4:
            printf("%d",b); 
            break; 
        case 5:
            printf("%d",a);
            break;      
        case 6:
            printf("%d",b);
            break;
        case 7:
            printf("%d",a);
            break;
        case 8:
            printf("%d",a);
            break;
        case 9:
            printf("%d",b);
            break;
        case 10:
            printf("%d",a);
            break;
        case 11:
            printf("%d",b);
            break;
        case 12:
            printf("%d",a);
            break;
        default:
            printf("Invalid month");    

    }
    return 0;
}