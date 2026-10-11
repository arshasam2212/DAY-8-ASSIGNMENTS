```c
#include <stdio.h>

int main() {
    int num, temp, digit, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not Strong numbers.");
        return 0;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is a Strong number.", num);
    else
        printf("%d is not a Strong number.", num);

    return 0;
}
```