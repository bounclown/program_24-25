#include <stdio.h>


int main()
{

	int a, l = 0;
	char hex[12];
	printf("Введите число для перевода в шестнадцатеричную систему счислениия a = ");
	scanf("%d", &a);

	while (a > 0)
	{
		int n = a & 15;

		if (n < 10) {
			hex[l++] = n + '0';
		} else {
			hex[l++] = (n - 10) + 'A';
		}

		a = a >> 4;
	}

	printf("Ваше число в шестнадцатеричной системе счисления = ");

	for (int i = l - 1; i >= 0; i --)
	{
		printf("%c", hex[i]);
	}

	printf("\n");

}
