int binarySearch(int arr[] , int n,int target){
    for(int i=1;i<=n;i++){
        if(arr[i]==target){
            return i;
        }else {
            return -1;
        }
    }
}