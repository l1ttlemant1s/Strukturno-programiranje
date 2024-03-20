#include<stdio.h>

int main() {

	int aiNiz[10] = { 12,3,8,90,150,6,37,23,88,47 };
	int iSuma = 0, iBrojac = 0, iIndeks;
	float fProsek, fOdstupanje, fOdstupanjeMin;
	int iIndeksEementaKojiNajmanjeOdstupa = 0;

	for (iIndeks = 0;iIndeks <= 9;iIndeks++) {
		iSuma += aiNiz[iIndeks];
		iBrojac++;
	}
	fProsek = (float)iSuma / iBrojac;

	fOdstupanjeMin = fProsek - aiNiz[iIndeksEementaKojiNajmanjeOdstupa];

	for (iIndeks = 1;iIndeks <= 9;iIndeks++) {
		fOdstupanje = fProsek - aiNiz[iIndeks];

		if (fOdstupanje < 0) {
			fOdstupanje *= (-1);
		}
		if (fOdstupanje < fOdstupanjeMin) {
			fOdstupanjeMin = fOdstupanje;
			iIndeksEementaKojiNajmanjeOdstupa = iIndeks;
		}
	}

	printf("\nProsek je %.2f ", fProsek);
	printf("\nTrazeni element ima indeks %d i Vrednost %d. ", iIndeksEementaKojiNajmanjeOdstupa, aiNiz[iIndeksEementaKojiNajmanjeOdstupa]);










	return 0;
}