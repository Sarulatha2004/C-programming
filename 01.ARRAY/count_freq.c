#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 2, 3, 1, 4, 2, 5, 3, 1};
    int freq[10] = {0}, n = 10;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for(int i = 0; i < n; i++) {
        if(freq[i] != 0)
            printf("Element %d occurs %d times\n", i, freq[i]);
    }

    return 0;
}

