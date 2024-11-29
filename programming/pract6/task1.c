#include <stdio.h>

int main()
{

	int a [10] = {2, 4, -5, 1, 3, -2, -6, -8, 5, -9};
	int b [10] = {3, -6, 7, 8, 9, -3, 5, -6, 7, -1};
	int c [10] = {0}, max_a = -99, cnt_b = 0, sred, sum_c = 0;

	for (int i = 0; i != 10; i++) {
		c[i] = a[i] + b[i];
		sum_c += c[i];
	}

	for (int i = 0; i != 10; i += 2) {
		if (a[i] > max_a) {
			max_a = a[i];
		}
	}

	for (int i = 1; i != 9; i += 2) {
		if (b[i] < 0) {
			cnt_b += 1;
		}
	}

	printf("%d\n%d\n%f\n", max_a, cnt_b, sum_c/10.0);

}
