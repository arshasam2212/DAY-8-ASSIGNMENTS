```c
#include <stdio.h>

int main() {
    int num, temp, digit;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not considered palindromes.");
        return 0;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Reverse = %d\n", reverse);

    if (num == reverse)
        printf("%d is a Palindrome number.", num);
    else
        printf("%d is not a Palindrome number.", num);

    return 0;
}
```