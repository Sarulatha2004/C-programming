#include <stdio.h>
int main() {
    int mat[3][3], i, j, sum = 0;
    printf("Enter 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < 3; i++) {
        sum += mat[i][i];  // main diagonal
    }

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}

