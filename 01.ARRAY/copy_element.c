#include <stdio.h>
int main() {
    int arr1[5] = {5, 10, 15, 20, 25};
    int arr2[5];
    for(int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }
    printf("Copied array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}

