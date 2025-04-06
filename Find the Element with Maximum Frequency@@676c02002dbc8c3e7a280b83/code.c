#include <stdio.h>
int maxfreq(int arr[],int n){
    int maxcount=0, maxcountelement=arr[0];
    for(int i=0;i<n;i++){
        for(int j=j;j<n;j++){
            int count=0;
            if(arr[j]==arr[i]){
                count++;
            }
            if((count>maxcount) ){
                maxcount=count;
                maxcountelement=arr[i];
            }
            else if(count<=maxcount) break;
        }
    }
    return maxcountelement;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",maxfreq(arr,n));
    return 0;

}