#include<stdio.h>

int main() {

	int aiOcene[2][5] = { {6,6,8,10,7}, {9,9,8,7,10} };
	int aiKopija[2][5];
	int iRed, iKolona;

	for (iRed = 0;iRed <= 1;iRed++) {
		for (iKolona = 0;iKolona <= 4;iKolona++) {
			aiKopija[iRed][iKolona] = aiOcene[iRed][iKolona];
			printf("\nIndeks reda: %d  Indeks kolone: %d Vrednost: %d", iRed, iKolona, aiKopija[iRed][iKolona]);
		}
	}

	return 0;
}