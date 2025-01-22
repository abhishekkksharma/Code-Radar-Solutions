#include <stdio.h>

int  welcome(int a, int b) {
    if((a*a)%b==0 ||(b*b)%a==0){
        return "Yes";
    }else{
        return "No";
    }
    return 0;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%s", welcome(x,y));
    return 0;
}