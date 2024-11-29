#include <stdio.h>


int main()
{
	int a, s, n;
	printf("Введите число и мы проверим является ли оно составным a = ");
	scanf("%d", &a);

	for (s = 0, n = 2; n < a; n++)
		if (a % n == 0) { s = 1; break; }

	if (s == 1) puts("1");
	else puts("0");


}
