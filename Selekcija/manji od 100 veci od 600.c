#include<stdio.h>

int main() {

	int iBroj;

	printf("Unesite broj:");
	scanf_s("%d", &iBroj);

	if (iBroj < 100 || iBroj >600) {
		printf("Uslov je zadovoljen.");
	}
	else {
		printf("Uslov nije zadovoljen.");
	}

	return 0;
}