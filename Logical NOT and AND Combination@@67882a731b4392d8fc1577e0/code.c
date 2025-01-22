#include <stdio.h>

// int welcome(int a, int b) {
//     if(!(a>0 && b>0)){
//         return "True";
//     }else{
//         return "False";
//     }
//     return 0;
// }

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if (!(x>0 && y>0)){
        printf("True");
    }else{
        printf("False");
    }
    // printf("%s", welcome(x,y));
    return 0;
}