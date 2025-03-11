#include <stdio.h>

int freq(int n,int arr[]){
    int max=0,int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(max==0){
                continue;
            }else{
                count++;
                max=arr[i];
            }
        }
        }
    return max;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",freq(n,arr));
    return 0;
}