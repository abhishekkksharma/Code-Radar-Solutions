int binarySearch(int arr[] , int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
            break;
        }else if(arr[i]!=target){
            return -1;
            break;
        }
    }
}