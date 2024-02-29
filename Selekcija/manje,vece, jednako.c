#include<stdio.h>

int main() {

	int iBroj1, iBroj2;

	printf("Unesite prvi broj:");
	scanf_s("%d", &iBroj1);

	printf("Unesite drugi broj:");
	scanf_s("%d", &iBroj2);

	if (iBroj1 > iBroj2) {
		printf("%d > %d", iBroj1, iBroj2);
	}
	else if (iBroj1 == iBroj2) {
		printf("%d = %d", iBroj1, iBroj2);
	}
	else {
		printf("%d < %d", iBroj1, iBroj2);
	}


	return 0;
}