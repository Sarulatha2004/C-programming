#include <stdio.h>
int main() {
    int arr[6] = {12, 35, 1, 10, 34, 1};
    int first, second;
    
    first = second = -1;
    for(int i = 0; i < 6; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Second largest = %d\n", second);
    return 0;
}

