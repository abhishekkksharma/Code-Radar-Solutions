void insertionSort(int arr[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j][0]>arr[j+1][0]){
                char temp[100]=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

printArray(int arr[][100],int n){
    for(int i=0 ;i<n;i++){
        prinf("%s",arr[i]);
    }
}