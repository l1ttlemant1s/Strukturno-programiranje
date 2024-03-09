#include<stdio.h>

int main() {

	int iBroj;

	iBroj = 25;

	/*for (iBroj = 25;iBroj >= 10;iBroj--) {
		printf("\n%d", iBroj);
	}*/

	/*while (iBroj >= 10) {
		printf("\n%d", iBroj);
		iBroj--;
	}*/

	do {
		printf("\n%d", iBroj);
		iBroj--;
	} while (iBroj >= 10);




	return 0;
}