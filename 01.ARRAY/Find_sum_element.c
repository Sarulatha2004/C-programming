#include <stdio.h>
int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int i, sum = 0;
    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Sum of array elements = %d", sum);
    return 0;
}

