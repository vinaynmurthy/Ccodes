#include "stdio.h"
#include "math.h"

#define N 4
#define M 5

void transpose(int A[N][M]) {

    int TransposeA[M][N] = {};

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            TransposeA[j][i] = A[i][j];
        }
    }

    printf("\nTranspose of MatrixA is a %d X %d Matrix.\n", M, N);
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++) {
            printf("%d ", TransposeA[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int MatrixA[N][M] = {};

    printf("Enter the Matrix elements of %d X %d Matrix\n", N, M);

    for(int i = 0; i < N; i++){
        printf("Enter the %d elements of the row number: %d\n", M, (i+1));
        for(int j = 0; j < M; j++) {
            scanf("%d", &MatrixA[i][j]);
        }
    }

    printf("Entered Elements of %d X %d Matrix.\n", N, M);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) {
            printf("%d ", MatrixA[i][j]);
        }
        printf("\n");
    }

    transpose(MatrixA);

return 0;
}
