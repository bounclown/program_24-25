#include <stdio.h>


void printTreugolnik()
{

	int n = 7;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (i * 2 - 1); j++) {
			printf("*");
		}
		printf("\n");
	}

}

int main()
{

	printTreugolnik();
	printTreugolnik();

}
