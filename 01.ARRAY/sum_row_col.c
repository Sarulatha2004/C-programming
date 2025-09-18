#include <stdio.h>
int main() {
    int mat[3][3], i, j, rowSum, colSum;

    printf("Enter 3x3 matrix elements:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < 3; i++) {
        rowSum = colSum = 0;
        for(j = 0; j < 3; j++) {
            rowSum += mat[i][j];   // sum of ith row
            colSum += mat[j][i];   // sum of ith column
        }
        printf("Row %d sum = %d\n", i+1, rowSum);
        printf("Col %d sum = %d\n", i+1, colSum);
    }
    return 0;
}

