#include <stdio.h>

int main() {

	int iBroj, iRedniBroj;
	int iBrojac = 0;

	for (iRedniBroj = 1;iRedniBroj > 0;iRedniBroj++) {
		printf("Unesite %d. broj: ", iRedniBroj);
		scanf_s("%d", &iBroj);

		if (iBroj % 2 != 0 && iBroj != 0) {
			iBrojac++;
		}
		if (iBroj == 0) {
			printf("\nUkupno neparnih brojeva: %d", iBrojac);
			break;
		}

	}











	return 0;
}