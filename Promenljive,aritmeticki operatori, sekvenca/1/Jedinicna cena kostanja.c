#include<stdio.h>

int main() {

	int iUkupniTroskovi;
	int iObimProizvodnje;
	float fCenaKostanja;

	printf("Unesite troskove proizvodnje:");
	scanf_s("%d", &iUkupniTroskovi);

	printf("\nUnesite obim proizvodnje:");
	scanf_s("%d", &iObimProizvodnje);

	fCenaKostanja = (float)iUkupniTroskovi / iObimProizvodnje;
	printf("\nCena kostanja iznosi %f din. po komadu proizvoda", fCenaKostanja);

	return 0;
}