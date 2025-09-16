#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i, key, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element %d found at index %d", key, i);
    else
        printf("Element not found");

    return 0;
}

