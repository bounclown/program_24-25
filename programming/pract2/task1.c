#include <stdio.h>

int main(void)
{

	int x;
	printf("please enter the year to check for leap, x:\n");
	scanf("%d", &x);

	if (x % 400 == 0) {
		printf("Your year is a leap year\n");
	} else if (x % 100 == 0) {
		printf("Your year is not a leap year\n");
	} else if (x % 4 == 0) {
		printf("Your year is a leap year\n");
	} else {
		printf("Your year is not a leap year\n");
	}

}
