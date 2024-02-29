#include<stdio.h>

int main() {

	int iBroj;

	printf("Unesite jedan ceo broj:");
	scanf_s("%d", &iBroj);

	if (iBroj != 0) {
		if (iBroj % 2 == 0) {
			printf("Uneti broj je deljiv sa 2.");
		}
		if (iBroj % 3 == 0) {
			printf("\nUneti broj je deljiv sa 3.");
		}
		if (iBroj % 5 == 0) {
			printf("\nUneti broj je deljiv sa 5.");
		}
		if (iBroj % 7 == 0) {
			printf("\nUneti broj je deljiv sa 7.");
		}
		if (iBroj % 9 == 0) {
			printf("\nUneti broj je deljiv sa 9.");
		}
	}

	return 0;
}