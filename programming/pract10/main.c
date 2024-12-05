#include "vector.h"


int main() {
    int n = get_int("Введите количество задаваемых векторов: ");

    Vector vectors[n];
    for (int i = 0; i < n; i++) {
        vectors[i] = get_vector(i + 1);
    }

    printf("\nДлины векторов:\n");
    for (int i = 0; i < n; i++) {
        printf("Вектор %d: %.2f\n", i + 1, vec_len(vectors[i]));
    }

    int long_index = find_long(vectors, n);
    printf("\nСамый длинный вектор: %d\n", long_index + 1);

}