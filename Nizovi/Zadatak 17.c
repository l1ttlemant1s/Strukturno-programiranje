#include<stdio.h>

int main() {

	int aiOcene[2][2][5] = { {{6,6,8,10,7} , {9,9,8,7,10}} , {{8,9,10,10,10} , {7,7,8,6,10}} };
	int aiKopija[2][2][5];
	int iTabela, iRed, iKolona;

	printf("Ispis vrednosti elemenata niza aiKopija\n");

	for (iTabela = 0;iTabela <= 1;iTabela++) {
		for (iRed = 0;iRed <= 1;iRed++) {
			for (iKolona = 0;iKolona <= 4;iKolona++) {
				aiKopija[iTabela][iRed][iKolona] = aiOcene[iTabela][iRed][iKolona];
				printf("\nIndeks tabele: %d  Indeks reda: %d  Indeks kolone: %d  Vrednost: %d", iTabela, iRed, iKolona, aiKopija[iTabela][iRed][iKolona]);
			}
		}
		printf("\n----------------------------------------------------------------");
	}















	return 0;
}