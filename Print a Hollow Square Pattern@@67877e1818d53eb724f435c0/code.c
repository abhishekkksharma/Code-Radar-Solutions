#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(1>=2 && i<j && j>1 && j<n)
            {
                printf(" ");
            }else{
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}