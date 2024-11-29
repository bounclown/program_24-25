#include <stdio.h>


int main()
{

	int a;
	printf("Введите число и мы проверим простое ли оно a = ");
	scanf("%d", &a);
	int n;
	for (n = 2; n<a && a%n!=0; n++);

	if (n==a) puts("1");
	else puts("0");


}
