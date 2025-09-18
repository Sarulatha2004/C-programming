#include <stdio.h>
int main() {
    int mat[3][3], i, j, flag = 1;
    printf("Enter 3x3 matrix elements:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                flag = 0;
                break;
            }
        }
    }
    if(flag)
        printf("Matrix is an Identity Matrix\n");
    else
        printf("Matrix is NOT an Identity Matrix\n");
    return 0;
}

