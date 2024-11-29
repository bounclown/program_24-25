#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Minor(int n, int matrix[n][n], int minor[n-1][n-1], int row, int col) {
    int i = 0, j = 0;
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            if (r != row && c != col) {
                minor[i][j++] = matrix[r][c];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

int opred(int n, int matrix[n][n]) {
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    int op = 0, xd = 1, minor[n-1][n-1];

    for (int col = 0; col < n; col++) {
        Minor(n, matrix, minor, 0, col);
        op += xd * matrix[0][col] * opred(n - 1, minor);
        xd = -xd;
    }

    return op;
}

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void createCramerMatrix(int n, int matrix[n][n], int b[], int cramerMatrix[n][n], int colReplace) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cramerMatrix[i][j] = (j == colReplace) ? b[i] : matrix[i][j];
        }
    }
}

int main()
{
    int n;
    printf("Введите размер матрицы n = ");
    scanf("%d", &n);
    int matrix[n][n];
    int b[n];

    printf("Начните заполнять матрицу построчно, разделяя числа пробелами:\n");
    char input[100];
    
    for (int i = 0; i < n; i++) {
        printf("Строка %d: ", i + 1);
        scanf(" %[^\n]", input);

        char* token = strtok(input, " ");
        for (int j = 0; j < n; j++) {
            matrix[i][j] = atoi(token);
            token = strtok(NULL, " ");
        }
    }

     printf("Введите вектор свободных членов:\n");
    for (int i = 0; i < n; i++) {
        printf("b[%d] = ", i + 1);
        scanf("%d", &b[i]);
    }
    
    printf("Матрица системы:\n");
    printMatrix(n, matrix);
    
    int det = opred(n, matrix);
    printf("Определитель основной матрицы: %d\n", det);

    if (det == 0) {
        printf("Система не имеет единственного решения (определитель равен 0).\n");
        return 0;
    }

    int cramerMatrix[n][n];
    for (int i = 0; i < n; i++) {
        createCramerMatrix(n, matrix, b, cramerMatrix, i);
        int det_i = opred(n, cramerMatrix);
        printf("x%d = %d\n", i + 1, det_i / det);
    }  
}