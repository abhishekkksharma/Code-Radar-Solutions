// Your code here...
int binarySearch(int arr[n] , int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return 0;
}