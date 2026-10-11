```c
#include <stdio.h>

int main() {
    int a[100], n, i;
    int largest, second;
    int found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Invalid array size.");
        return 0;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] < largest) {
            if (found == 0 || a[i] > second) {
                second = a[i];
                found = 1;
            }
        }
    }

    if (found == 1)
        printf("Second largest element = %d", second);
    else
        printf("Second largest element does not exist.");

    return 0;
}
```