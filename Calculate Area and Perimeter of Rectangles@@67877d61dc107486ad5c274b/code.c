// Your code here...#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int len[n],width[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&len[i],&width[i]);
    }
    for(int i=0;i<n;i++){
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i,len[i]*width[i],2(len[i]+width[i]));
    }
    return 0;
}
