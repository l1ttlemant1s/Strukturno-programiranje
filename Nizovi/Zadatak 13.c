#include<stdio.h>

int main() {

	int aiNiz[2][3];
	int iRed, iKolona;

	for (iRed = 0;iRed <= 1;iRed++) {
		for (iKolona = 0;iKolona <= 2;iKolona++) {
			printf("Indeks reda: %d  Indeks Kolone: %d  Unesite vrednost: ", iRed, iKolona);
			scanf_s("%d", &aiNiz[iRed][iKolona]);
		}
	}

	printf("\nIspis vrednosti elemenata niza vecih od 10");

	for (iRed = 0;iRed <= 1;iRed++) {
		for (iKolona = 0;iKolona <= 2;iKolona++) {
			if (aiNiz[iRed][iKolona] > 10) {
				printf("\nIndeks reda: %d  Indeks Kolone: %d  Vrednost: %d ", iRed, iKolona, aiNiz[iRed][iKolona]);
			}
		}
	}





	return 0;
}