#include <stdio.h>

int palindrome(int n) {
    if (n < 0) {
        return 0;
    }

    int num = n, reversedNum = 0, remainder, originalNum;
    originalNum = n;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, count = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (palindrome(arr[i])) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
