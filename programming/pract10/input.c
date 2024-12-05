#include "vector.h"

int get_int(const char* prompt) {
    int n;
    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &n) == 1 && n > 0) {
            return n;
        } else {
            printf("Ошибка: введите положительное целое число.\n");
            while (getchar() != '\n');
        }
    }
}

Vector get_vector(int index) {
    float x, y, z;
    while (1) {
        printf("Введите координаты %d вектора (x, y, z): ", index);
        if (scanf("%f %f %f", &x, &y, &z) == 3) {
            while (getchar() != '\n');
            return vec_init(x, y, z);
        } else {
            printf("Ошибка: введите три числа через пробел.\n");
            while (getchar() != '\n');
        }
    }
}
