#include <stdio.h>
int main() {
    int mat[3][3], trans[3][3], i, j;
    printf("Enter 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            trans[j][i] = mat[i][j];

    printf("Transpose of matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}

