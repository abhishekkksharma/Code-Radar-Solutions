#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j][0]>arr[j+1][0]){
            char tempname[100];
            strcpy(tempname,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],tempname);
        }
        }
    }
}
printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s",arr[i]);
    }
}