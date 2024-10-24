#include <stdio.h>

int main() {

	float x;
	char c ;
	printf("Input temperature: ");
	scanf("%f%c", &x, &c);

	switch (c) {
		case 99:
		case 'C':
			printf("Output temperature: %.1ff\n", (9.0 / 5.0) * x + 32);
			break;
		case 70:
		case 102:
			printf("Output temperature: %.1fc\n", (5.0 / 9.0) * (x - 32));
			break;
		default:
			printf("Output error\n");
		}

}
