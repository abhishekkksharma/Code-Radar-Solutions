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
            printf("%d",b);
            break;
        case 4:
            printf("%d",b); 
            break 
        case 5:
            printf("%d",a);
            break;      
        case 6:
            printf("%d",b);
            
        case 7:
            printf("%d",b);
        case 8:
            printf("%d",b);
        case 9:
            printf("%d",b);

    }
    printf("%s", welcome(x));
    return 0;
}