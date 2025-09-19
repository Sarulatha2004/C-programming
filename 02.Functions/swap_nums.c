#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    printf("Enter a: ");
    scanf("%d", &x);
    printf("Enter b: ");
    scanf("%d", &y);

    swap(x, y); // Function call
    return 0;
}

