#include <stdio.h>


int main()
{

	int n=2, flag = 0, a;
	printf("Введите число и мы проверим является ли оно простым a = ");
	scanf("%d", &a);

	while(a%n!=0){
        	n++;
        	if (n==a) {flag = 1; break;}
	}

	if (flag == 1) puts("1");
	else puts("0");

}
