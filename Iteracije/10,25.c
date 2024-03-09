#include<stdio.h>

int main() {

	int iBroj;

	iBroj = 10;

	/*for (iBroj = 10;iBroj <= 25;iBroj++) {
		printf("\n%d", iBroj);
	}*/

	/*while (iBroj <= 25) {
		printf("\n%d", iBroj);
		iBroj++;
	}*/

	do {
		printf("\n%d", iBroj);
		iBroj++;
	} while (iBroj <= 25);

	return 0;
}