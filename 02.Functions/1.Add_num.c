#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum = add(x, y); // Function call
    printf("Sum = %d\n", sum);

    return 0;
}

