#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end;
    scanf("%[^\n]", str);

    int count = 0;
    int in_word = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && !in_word) {
            in_word = 1;
            count++;
        }
        if (str[i] == ' ') {
            in_word = 0;
        }
    }

    printf("%d", count);
    return 0;
}
