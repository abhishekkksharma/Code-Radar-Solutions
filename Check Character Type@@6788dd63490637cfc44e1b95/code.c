#include <stdio.h>

char welcome(char c) {
    if(c=='a' ||c=='e' c=='i' || c=='o' || c=='u'){
        return "Vowel";
    }else if((c>='a' && c<='z')){
        return "Constant";
    }else if (c>='0' && c<='9'){
        return "Digit";
    }
    else{
        return "Special Character";
    }
    return 0;
}
int main() {
    char x;
    scanf("%c",&x);
    printf("%s", welcome(x));
    return 0;
} 