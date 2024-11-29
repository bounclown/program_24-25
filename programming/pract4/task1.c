#include <stdio.h>


int main()
{

	int l = 1, n;
	printf("Введите n = ");
	scanf("%d", &n);

	for (int i = 0; i != n; i++) {
		for (int j = 0; j != n; j++) {
			printf("%d", l);
			l++;
		}
		printf("\n");
	}

}
