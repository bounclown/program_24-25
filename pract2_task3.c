#include <stdio.h>

int main() {

	float x, y;
	printf("Введите абциссу точки:");
	scanf("%f", &x);
	printf("Введите ординату точки:");
        scanf("%f", &y);

	y >= -1 * x && 1 >= x && y <= 1 ? printf("Yea\n") : printf("No\n");

}
