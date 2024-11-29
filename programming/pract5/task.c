#include <stdio.h>


int main()
{

	int a, l = 0;
	char oct[12];
	printf("Введите число для перевода в восьмиричную систему счисления a = ");
	scanf("%d", &a);

	while (a > 0)
	{
		oct[l++] = (a & 7) + '0';
		a = a >> 3;
	}

	printf("Ваше число в восьмеричной системе счисления = ");

	for (int i = l - 1; i >= 0; i--)
	{
		printf("%c", oct[i]);
	}

	printf("\n");

}
