#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int input_num() {
    int n, c;
    printf("Ведите число: ");
    while (scanf("%d", &n) != 1) {
        while (!isspace(c = getchar()));
        ungetc(c, stdin);
        printf("Вы ввели не число, попробуйте снова: ");
        continue;
    }

    return n;
}

int** createM(int rows, int cols, int mode) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    if (mode == 1) {
        printf("Введите элементы матрицы:\n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = input_num();
            }
        }
    } else {
        srand(time(NULL));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = rand() % 21 - 10;
            }
        }
    }
    return matrix;
}

void sort_cols(int** matrix, int rows, int cols, int* swaps) {
    for (int j = 0; j < cols; j++) {
        swaps[j] = 0;
        for (int k = 0; k < rows - 1; k++) {
            for (int i = 0; i < rows - k - 1; i++) {
                if (matrix[i][j] > matrix[i + 1][j]) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i + 1][j];
                    matrix[i + 1][j] = temp;
                    swaps[j]++;
                }
            }
        }
    }
}

int min_swaps(int* swaps, int cols) {
    int min_index = 0;
    for (int j = 1; j < cols; j++) {
        if (swaps[j] < swaps[min_index]) {
            min_index = j;
        }
    }
    return min_index;
}

int count_positives(int** matrix, int rows, int col) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        if (matrix[i][col] > 0) {
            count++;
        }
    }
    return count;
}

void replace_col(int** matrix, int rows, int col) {
    for (int i = 0; i < rows; i++) {
        matrix[i][col] = 0;
    }
}

void free_matrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void print_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, mode;
    printf("Введите количество строк и столбцов матрицы: \n");
    rows = input_num();
    cols = input_num();

    while (rows < 1 || cols < 1) {
        printf("Размеры матрицы должны быть положительными, попробуйте снова.\n");
        rows = input_num();
        cols = input_num();
    }

    printf("Выберите способ заполнения матрицы (1 - вручную, 2 - случайно)\n");
    mode = input_num();

    while (mode < 1 || mode > 2) {
        printf("Выберите 1 или 2\n");
        mode = input_num();
    }
//wrong scanf input 
    int** matrix = createM(rows, cols, mode);

    printf("Исходная матрица:\n");
    print_matrix(matrix, rows, cols);

    int* swaps = (int*)malloc(cols * sizeof(int));
    sort_cols(matrix, rows, cols, swaps);

    printf("Матрица после сортировки столбцов:\n");
    print_matrix(matrix, rows, cols);

    int min_swaps_col = min_swaps(swaps, cols);
    printf("Столбец с минимальным количеством перестановок: %d\n", min_swaps_col + 1);

    int positives = count_positives(matrix, rows, min_swaps_col);
    printf("Количество положительных элементов в этом столбце: %d\n", positives);

    replace_col(matrix, rows, min_swaps_col);

    printf("Матрица после замены столбца на нули:\n");
    print_matrix(matrix, rows, cols);

    free(swaps);
    free_matrix(matrix, rows);
}
