#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

void sort_abs(int m, int z[m])
{

	int i = 0, l = 1, k = 0;

	while (1) {
		if (l == 0) {
			break;
		}
		if (i == m - 1) {
			i = 0;
			l = 0;
		}
		if (abs(z[i]) > abs(z[i + 1]) ) {
			k = z[i];
			z[i] = z[i + 1];
			z[i + 1] = k;
			l += 1;
		}
		i++;
	}
	printf("Отсортриованный по модулю массив: ");
	for (i = 0; i != m; i++) {
		printf("%d ", z[i]);
	}
	printf("\n");
}

void sort_reverse(int m, int z[m])
{

	int i = 0, l = 1, k = 0;

	while (1) {
		if (l == 0) {
			break;
		}
		if (i == m - 1) {
			i = 0;
			l = 0;
		}
		if (z[i] < z[i + 1]) {
			k = z[i];
			z[i] = z[i + 1];
			z[i + 1] = k;
			l += 1;
		}
		i++;
	}
	printf("Отсортированный массив: ");
	for (i = 0; i != m; i++) {
		printf("%d ", z[i]);
	}
	printf("\n");
}

int main()
{
	int m = 0; bool l = false;

	printf("Введите количество чисел для массива m = ");
	
	while (m <= 0) {
		scanf("%d", &m);
		if (m <= 0) {
			printf("Количество чисел массива может быть только положительным\nПопробуйте снова m = ");
		}
	}
	
	int z[m];
	printf("Начните заполнять массив числами, нажимая enter после каждого введённого числа\n");
	for (int i = 0; i != m; i++) {
		scanf("%d", &z[i]);
	}
	printf("Ввод чисел завершён\n");

	for (int i = 0; i != m - 1; i++) {
		if (z[i] > 0 && z[i + 1] >= 0 || z[i] < 0 && z[i + 1] < 0) {
			l = true;
			break;
		}
	}
	if (l == false) {
		sort_abs(m, z);
	} else {
		sort_reverse(m, z);
	}
}