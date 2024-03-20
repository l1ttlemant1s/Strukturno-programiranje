#include<stdio.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int iBrojac = 0, iSuma = 0, iIndeks;
	float fProsek;

	for (iIndeks = 0;iIndeks <= 9;iIndeks++) {
		if (aiNiz[iIndeks] % 2 != 0 && aiNiz[iIndeks] > 10) {
			iBrojac++;
			iSuma += aiNiz[iIndeks];
		}
	}

	fProsek = (float)iSuma / iBrojac;

	printf("\nUkupno: %d", iBrojac);
	printf("\nZbir: %d", iSuma);
	printf("\nProsek: %.2f", fProsek);


















	return 0;
}