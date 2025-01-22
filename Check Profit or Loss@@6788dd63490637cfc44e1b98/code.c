#include <stdio.h>

int welcome(int a,int b) {
    if(a>b){
        return "Loss";
    }else if(a<b){
        return "Profit";
    }
    else{
        return "No Profit No Loss";
    }
    return 0;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%s", welcome(x,y));
    return 0;
}