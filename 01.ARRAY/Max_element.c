#include <stdio.h>
int main() {
    int arr[5] = {12, 45, 23, 67, 34};
    int i, max = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Largest element = %d", max);
    return 0;
}

