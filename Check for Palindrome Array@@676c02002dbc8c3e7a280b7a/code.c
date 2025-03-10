#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start=0;
    int end=n-1;
        if(arr[start]==arr[end]){
            printf("YES");
        }else{
            printf("NO");
        }

    return 0;
}
