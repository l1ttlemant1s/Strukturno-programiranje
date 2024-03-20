#include<stdio.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int iZbir = 0, iIndeks;
	int iBrojac = 0;
	float fProsecnaVr;

	for (iIndeks = 0;iIndeks <= 9;iIndeks++) {
		iZbir += aiNiz[iIndeks];
		iBrojac++;
	}

	fProsecnaVr = (float)iZbir / iBrojac;

	printf("\nZbir: %d", iZbir);
	printf("\nProsek %.2f", fProsecnaVr);









	return 0;
}