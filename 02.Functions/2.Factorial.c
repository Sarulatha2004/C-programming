#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1, i;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}

