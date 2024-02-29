#include<stdio.h>

int main() {

	int iBroj;

	printf("Unesite jedan broj:");
	scanf_s("%d", &iBroj);

	/*if (iBroj >= 10 && iBroj <= 100) {
		printf("Broj koji ste uneli se nalazi u opsegu .");
	}
	else {
		printf("Broj koji ste uneli se ne nalazi u opsegu .");
	}*/

	if (iBroj > 10 && iBroj < 100) {
		printf("Broj koji ste uneli se nalazi u opsegu .");
	}
	else {
		printf("Broj koji ste uneli se ne nalazi u opsegu .");
	}

	return 0;
}