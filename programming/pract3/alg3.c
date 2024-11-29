#include <stdio.h>


int main()
{
	int a, s, n;
	printf("Введите число и мы проверим его на простоту a = ");
	scanf("%d", &a);


	for (s = 0,n = 2; n < a; n++)
      		if (a % n == 0) s++;
	if (s == 0) puts("1");
	else puts("0");

}
