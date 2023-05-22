#include <stdio.h>
#define ROWS 3
#define COLS 3
void addMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void displayMatrix(int matrix[][COLS]) {
    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int mat1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[ROWS][COLS] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};
    int result[ROWS][COLS];  
    printf("Matrix 1:\n");
    displayMatrix(mat1);   
    printf("\nMatrix 2:\n");
    displayMatrix(mat2);   
    addMatrices(mat1, mat2, result);   
    printf("\nSum of the matrices:\n");
    displayMatrix(result);  
    return 0;
}
