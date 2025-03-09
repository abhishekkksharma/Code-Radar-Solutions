#include <stdio.h>
#include <string.h>

int binarycheck(char a[100]){
    int n = strlen(a);
    for(int i=0;i<n;i++){
        if(a[i]!=0 || a[i]!=1){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str[100];
    scanf("%s",str);
    if(binarycheck(str)==0){
        printf("No");
    }
    else if (binarycheck(str)==1){
        printf("Yes");
    }
    return 0;

}