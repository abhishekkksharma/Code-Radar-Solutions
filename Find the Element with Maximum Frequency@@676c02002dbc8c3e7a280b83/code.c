#include <stdio.h>
int maxfreq(int arr[],int n){
    int maxcount=0, maxcountelement=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int count;
            if(arr[j]==arr[i]){
                count++;
            }
            if(count>maxcount){
                maxcount=count;
            }
            arr[i]=maxcountelement;

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