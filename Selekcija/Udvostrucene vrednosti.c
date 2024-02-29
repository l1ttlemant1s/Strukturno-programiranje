#include<stdio.h>

int main() {

	int a, b, c;

	printf("Unesite vrednost promenljive a:");
	scanf_s("%d", &a);
	printf("Unesite vrednost promenljive b:");
	scanf_s("%d", &b);
	printf("Unesite vrednost promenljive c:");
	scanf_s("%d", &c);

	if (a > b && a > c && b > c) {
		a *= 2;
		b *= 2;
		c *= 2;

		printf("a = %d, b = %d, c = %d", a, b, c);
	}
	else if (a < b && a < c && b < c) {
		a /= 2;
		b /= 2;
		c /= 2;
		printf("a = %d, b = %d, c = %d", a, b, c);
	}

	return 0;
}